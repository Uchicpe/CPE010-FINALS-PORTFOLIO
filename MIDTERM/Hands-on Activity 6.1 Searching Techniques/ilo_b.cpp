#include <iostream>
#include <cstdlib>
#include <time.h>
#include "ilo_b.h"

const int max_size = 10;

int main() {
/*
    int dataset[max_size] = {15, 18, 2, 19, 18, 0, 8, 14, 19, 14};

    Node<int>* node = new_node(dataset[0]);
    Node<int>* tail = node;
    std::cout << "ARRAY AND LINKED LIST LINEAR SEARCH\n";
    for(int i = 1; i < max_size; ++i){    
        tail->next = new_node(dataset[i]);
        tail = tail->next;
    }

    //linearSearchArr(max_size, 18, dataset);
    //linearSearchLL(node, 18);
    linearSearchArr2(max_size, 18, dataset);
    linearSearchLL2(node, 18);       
*/  
    int dataset[max_size] = {3, 5, 6, 8, 11, 12, 14, 15, 17, 18};

    binarySearchArr(8, dataset, max_size);
    return 0;
    //binarySearchArr2(dataset, 3, 18, 8);
    //return 0;
}
