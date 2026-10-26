#include <iostream>
#include "doubly_ll.h"

int main(){
    
    // C P E
    Doublylist<char>* head = createNode('C');
    Doublylist<char>* second = createNode('P');
    Doublylist<char>* third = createNode('E');
    
    //connecting the nodes:
    
    //connecting the head node to the next node:
    head->next = second;
    second->prev = head;
    
    //connecting the second node to the next node:
    second->next = third;
    third->prev = second;

    //traversal
    std::cout << "Testing the dllTraverse List:" <<std::endl;
    dllTraverse(head);

    //Insert at the head
    std::cout << "\nTesting the dllInsertHead List:" <<std::endl;
    dllInsertHead('X', &head);
    dllTraverse(head);

    //Insert at the end
    std::cout << "\nTesting the dllInsertEnd List:" <<std::endl;
    dllInsertEnd('Y', head);
    dllTraverse(head);

    //General Insert
    std::cout << "\nTesting the dllGeneralInsert List:" <<std::endl;
    dllGeneralInsert('Z', head->next);
    dllTraverse(head);

    //Delete a Node
    std::cout << "\nTesting the dllDeleteNode List:" <<std::endl;
    dllDeleteNode('E', &head);
    dllTraverse(head);


}