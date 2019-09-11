#ifndef SOLVING_OOP_2_P1_TWOLINKEDLIST_H
#define SOLVING_OOP_2_P1_TWOLINKEDLIST_H

struct Node{
    int value;
    Node* next = nullptr;
};

class TwoLinkedList{
private:
    Node* Head1 = nullptr;
    Node* Head2 = nullptr;
    Node* Tail1= nullptr;
    Node* Tail2 = nullptr;
    Node* Tail = nullptr;
    int numOfNodesL1 = 0;
    int numOfNodesL2 = 0;
    bool isMerged = false;
public:
    void push_back_1(int);
    void push_back_2(int);
    void merge();
    void printTLL();
};


#endif //SOLVING_OOP_2_P1_TWOLINKEDLIST_H
