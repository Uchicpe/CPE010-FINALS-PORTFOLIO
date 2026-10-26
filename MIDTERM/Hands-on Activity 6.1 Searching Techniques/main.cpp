#include <iostream>
#include <cstdlib>
#include <time.h>
#include "searchingAlgo.h"

const int max_size = 50;

int main() {

    // LINEAR SEARCH ARRAY
    // Generate random values 
    int dataset[max_size];
    srand(time(0));
    for(int i = 0; i < max_size; i++){
        dataset[i]=rand();
        std::cout << dataset[i] << " ";
    }
    
    // Show your dataset content
    /* 
    for(int i = 0; i < max_size; i++){
        std::cout << dataset[i] << " ";
    }
    */

    int choice;
    std::cout << "Indicate the number to search: ";
    std::cin >> choice;

    linearSearchArr(max_size, choice, dataset);

    std::cout << "------------------------------------\n";

    // LINEAR SEARCH LINKED LIST
    // Create linked list for linear search
    Node<char>* name1 = new_node('U');
    Node<char>* name2 = new_node('C');
    Node<char>* name3 = new_node('H');
    Node<char>* name4 = new_node('I');

    // Linked List
    name1->next = name2;
    name2->next = name3;
    name3->next = name4;
    name4->next = nullptr;

    // Linear Search
    linearSearchLL(name1, 'M');
    linearSearchLL(name2, 'C');
    linearSearchLL(name3, 'U');
    linearSearchLL(name4, 'I');

    std::cout << "------------------------------------\n";

    // BINARY SEARCH ARRAY 
    int dataset2[max_size];
    for(int i = 0; i < max_size; i++){
        dataset2[i] = i;
        std::cout << dataset2[i] << " ";
    }

    binarySearchArr(11, dataset2, max_size);
    binarySearchArr(11111, dataset2, max_size);

    std::cout << "------------------------------------\n";

    // BINARY SEARCH LINKED LIST 
    Node<char>* name6 = new_node('A');
    Node<char>* name7 = new_node('B');
    Node<char>* name8 = new_node('C');
    Node<char>* name9 = new_node('D');

    name6->next = name7;
    name7->next = name8;
    name8->next = name9;
    name9->next = nullptr;

    binarySearchLL(name6, 'C');
    binarySearchLL(name7, 'B');
    binarySearchLL(name8, 'A');
    binarySearchLL(name9, 'D');

    return 0;

}