#include <iostream>
#include "doubly_ll.h"

int main(){
    
    // C P E 0 1 0
    Doublylist<char>* head = createNode('C');
    Doublylist<char>* second = createNode('P');
    Doublylist<char>* third = createNode('E');
    Doublylist<char>* fourth = createNode('0');
    Doublylist<char>* fifth = createNode('1');
    Doublylist<char>* sixth = createNode('0');
    
    //connecting the nodes:
    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;
    //connecting 3 more nodes:
    third->next = fourth;
    fourth->prev = third;
    fourth->next = fifth;
    fifth->prev = fourth;
    fifth->next = sixth;
    sixth->prev = fifth;

    std::cout << "Testing the dllTraverse List:" <<std::endl;
    dllTraverse(head);

    std::cout << "\nTesting the dllInsertHead List:" <<std::endl;
    dllInsertHead('G', &head);
    dllTraverse(head);

    std::cout << "\nTesting the dllInsertHead List:" <<std::endl;
    dllGeneralInsert('E', head->next->next);
    dllTraverse(head);

    std::cout << "\nTesting the dllInsertHead List:" <<std::endl;
    dllDeleteNode('C', &head);
    dllTraverse(head);

    std::cout << "\nTesting the dllInsertHead List:" <<std::endl;
    dllDeleteNode('P', &head);
    dllTraverse(head);

    std::cout << "\nTesting the dllTraverse List:" <<std::endl;
    dllTraverse(head);

}