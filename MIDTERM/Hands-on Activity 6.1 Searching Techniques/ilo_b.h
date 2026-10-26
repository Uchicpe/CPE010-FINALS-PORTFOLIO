#ifndef ILO_B_H
#define ILO_B_H
#include <iostream>

template <typename T>
class Node {
    public:
        T data;
        Node *next;
};

template <typename T>
Node<T> *new_node(T newData){ 

    Node<T> *newNode = new Node<T>;
    newNode->data = newData;
    newNode->next = nullptr;
    return newNode;
}

template<typename T>
void linearSearchArr(int size, T dataFind, T data[]){
    int compare = 0;
    for (int i=0; i<size; i++) {
        std::cout << "Comparing: " << ++compare << "\n";
        if(data[i] == dataFind){
            std::cout << "Element Found at Index: " << i << "\n";
            return;
        }
    }
    std::cout << "Element not Found.\n";
}

template <typename T>
void linearSearchLL(Node<T> *node, T dataFinding) {
    int compare = 0;
    while(node != nullptr){
        std::cout << "Comparing: " << ++compare << "\n";
        if(node->data == dataFinding){
            std::cout << "Search was successful.\n";
            return;
        }
        node = node->next;
    }
    std::cout << "Search was unsuccessful\n";
}

// --------------------------------------------- //

template<typename T>
void linearSearchArr2(int size, T dataFind, T data[]){
    int total = 0;
    for (int i=0; i<size; i++) {
        if(data[i] == dataFind){
            std::cout << "Element Found at Index: " << i << "\n";
            std::cout << "Same Element Found: " << ++total << "\n";
        }
    }
    if (total > 0){
        return;
    }
    std::cout << "Element not Found.\n";
}

template <typename T>
void linearSearchLL2(Node<T> *node, T dataFinding) {
    int total = 0;
    while(node != nullptr){
        if(node->data == dataFinding){
            std::cout << "Search was successful.\n";
            std::cout << "Same Element Found: " << ++total << "\n";
        }
        node = node->next;
    }
    if (total > 0){
        return;
    }
    std::cout << "Search was unsuccessful\n";
}

template <typename T>
void binarySearchArr(T dataFind, T data[], int maxSize){

    int low = 0, up = maxSize-1, middle;
    while(low <= up){
        middle = (int)((low+up)/2);
        if(dataFind == data[middle]){
            std::cout << "\nSearching is successful\n";
            return;
        }
        else if(dataFind > data[middle]){
            low = middle + 1;
        } else {
            up = middle - 1;
        }
    }
    std::cout << "Search element was not found.\n";
}

template <typename T>
Node<T>* getMiddle(Node<T>* start, Node<T>* last){

    Node<T>* slow = start;
    Node<T>* fast = start;

    while(fast != last && fast->next != last){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

template <typename T>
void binarySearchArr2(T data[], int low, int high, T dataFindings){
    if (low > high){
        std::cout << "No Data Found. " << std::endl;
        return;
    }

    int middle = (int)((low+high)/2);
    if (dataFindings == data[middle]){
        std::cout << "Element's Index Found at: " << middle << std::endl;
        return;
    }
    if (dataFindings < data[middle]){
        binarySearchArr2(data, low, middle - 1, dataFindings);
    } else {
        binarySearchArr2(data, middle + 1, high, dataFindings);
    }
    std::cout << "Element is not Found." << std::endl;
}

#endif