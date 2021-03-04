
#ifndef CIRCULAR_LINKLIST_CLINKLIST_H
#define CIRCULAR_LINKLIST_CLINKLIST_H

class Node {
public:
    Node *next;
    int info;
};

class CLinkList {
    Node *Rear;
public:
    CLinkList();
    void insertNode(int item);
    void deleteNode(int item);
    void print();

};


#endif //CIRCULAR_LINKLIST_CLINKLIST_H
