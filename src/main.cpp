#include <iostream>
#include "CLinkList.h"

using namespace std;

int main() {
    CLinkList cLinkList = CLinkList();
    cLinkList.insertNode(5);
    cLinkList.insertNode(7);
    cLinkList.insertNode(1);
    cLinkList.print();
}