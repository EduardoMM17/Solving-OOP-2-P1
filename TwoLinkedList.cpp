#include <iostream>
#include "TwoLinkedList.h"


void TwoLinkedList::push_back_1(int val) {
    Node* newNode = new Node();
    newNode->value = val;
    numOfNodesL1++;
    newNode->next = Tail1;
    Tail1 = newNode;
    if(newNode->next == nullptr){
        Head1 = newNode;
    }
    std::cout<<"Node with val: " << val << " has been correctly added to the first list." << std::endl;
    numOfNodesL1++;
    if(isMerged){

    }
}

void TwoLinkedList::push_back_2(int val) {
    Node* newNode = new Node();
    newNode->value = val;

    newNode->next = Tail1;
    Tail2 = newNode;
    if(newNode->next == nullptr){
        Head2 = newNode;
    }
    std::cout<<"Node with val: " << val << " has been correctly added to the second list." << std::endl;
    numOfNodesL2++;
}

void TwoLinkedList::merge() {
    try{
        if(numOfNodesL1 < 1 && numOfNodesL2 <1){
            throw 1;
        }
        isMerged = true;
        Head2 = Tail1;
        std::cout<<"\nBoth lists have correctly merged.\n";
        Tail = Tail2;
    }catch(int e){
        std::cout<<"\nBoth lists need to have a least one node.\n";
    }
}

void TwoLinkedList::printTLL() {
    Node* aux1 = Tail;
    std::cout<<"\nThe values of the elements from both lists are:\n";
    while(aux1 != nullptr){
        std::cout<< aux1->value << std::endl;
        aux1 = aux1->next;
    }
}
