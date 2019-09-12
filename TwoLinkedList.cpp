#include <iostream>
#include <string.h>
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
    if(isMerged){
        newNode->next = Tail;
        Tail = newNode;
    }
    numOfNodesL1++;
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
    if(isMerged){
        newNode->next = Tail;
        Tail = newNode;
    }
    numOfNodesL2++;
}

void TwoLinkedList::merge() {
    try{
        if(numOfNodesL1 < 1 || numOfNodesL2 <1){
            throw 1;
        }
        try{
            if(isMerged){
                throw 2;
            }
            isMerged = true;
            Head2 = Tail1;
            Tail = Tail2;
            std::cout<<"\nBoth lists have correctly merged.\n";
        }catch(int e){
            std::cout<<"\nLists are already merged.\n";
        }
    }catch (int d){
        std::cout<<"\nBoth lists need to have at least one node.\n";
    }
}

bool TwoLinkedList::is_Merged() {
    return isMerged;
}

void TwoLinkedList::getList(int optionToGet) {
    std::string myStr;
    Node* aux1;
    if(optionToGet == 1){
        std::cout<<"\nThe values of the nodes from the first list are: \n";
        aux1 = Tail1;
        while(aux1 != nullptr){
            std::cout<<aux1->value << std::endl;
            aux1 = aux1->next;
        }
    }
    else if(optionToGet == 2){
        std::cout<<"\nThe values of the nodes from the second list are: \n";
        aux1 = Tail2;
        while(aux1 != Tail1){
            std::cout<<aux1->value << std::endl;
            aux1 = aux1->next;
        }
    }
    else{
        std::cout<<"\nThe values of the nodes from the merged list are: \n";
        aux1 = Tail;
        while(aux1 != nullptr){
            std::cout<<aux1->value << std::endl;
            aux1 = aux1->next;
        }
    }
}
