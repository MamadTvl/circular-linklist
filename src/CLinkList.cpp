
#include "CLinkList.h"
#include <iostream>

using namespace std;

CLinkList::CLinkList(){
    Rear = NULL;
}

void CLinkList::print() {
    Node *Cur;
    if (Rear != NULL) {
        Cur = Rear->next;
        do {
            cout << Cur->info << " ";
            Cur = Cur->next;
        } while (Cur != Rear->next);
        cout << endl;
    }
}

void CLinkList::deleteNode(int item) {
    Node *Cur, *Prev;
    if (Rear == NULL) {
        cout << "Trying to delete empty list" << endl;
        return;
    }
    Prev = Rear;
    Cur = Rear->next;
    do {                // find Prev and Cur
        if (item <= Cur->info) break;
        Prev = Cur;
        Cur = Cur->next;
    } while (Cur != Rear->next);
    if (Cur->info != item) {    // data does not exist
        cout << "Data Not Found" << endl;
        return;
    }
    if (Cur == Prev) {        // delete single-node list
        Rear = NULL;
        delete Cur;
        return;
    }
    if (Cur == Rear)        // revise Rear pointer if deleting end
        Rear = Prev;
    Prev->next = Cur->next;    // revise pointers
    delete Cur;

}

void CLinkList::insertNode(int item) {
    Node *New, *Cur, *Prev;
    New = new Node;
    New->info = item;
    if (Rear == NULL) {    // insert into empty list
        Rear = New;
        Rear->next = Rear;
        return;
    }
    Prev = Rear;
    Cur = Rear->next;
    do {                // find Prev and Cur
        if (item <= Cur->info)
            break;
        Prev = Cur;
        Cur = Cur->next;
    } while (Cur != Rear->next);
    New->next = Cur;    // revise pointers
    Prev->next = New;
    if (item > Rear->info)    //revise Rear pointer if adding to end
        Rear = New;

}