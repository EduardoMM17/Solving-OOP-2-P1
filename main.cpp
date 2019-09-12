#include <iostream>
#include "TwoLinkedList.h"

int main() {
    int numNodes;
    auto* TL1 = new TwoLinkedList();
    //std::cout<<"Enter the number of nodes you wish to add to the first list: "; std::cin>>numNodes;
    TL1->push_back_1(35);
    TL1->push_back_1(25);
    TL1->push_back_1(40);
    TL1->push_back_2(30);
    TL1->merge();
    std::cout << TL1->getList(1);
    std::cout << TL1->getList(2);
    std::cout << TL1->getList(0);

    return 0;
}