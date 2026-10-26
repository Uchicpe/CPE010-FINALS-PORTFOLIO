#ifndef QUEUELL_H
#define QUEUELL_H
#include <iostream>

template <typename T>
class qNode{
public:
    T data;
    qNode<T> *next;
};

//creating the new node
template <typename T>
qNode<T> *new_node(T newData){
    qNode<T> *newNode = new qNode<T>;
    newNode->data = newData;
    newNode->next = NULL;
    return newNode;
}

template <typename T>
void enqueue(T newData, qNode<T>** frontptr, qNode<T>** backptr){
    //create a new node
    qNode<T>* newNode = new_node(newData);

    //inserting into an empty queue

    //how do we know if the queue is empty?
    if ((*frontptr) == nullptr && (*backptr) == nullptr){
        //assign the frontptr to the newNode
        (*frontptr) = newNode;
        //assign the backptr to the newNode
        (*backptr) = newNode;
    }

    //point the back next to the newNode
    (*backptr)->next = newNode;
    //the new node will be the new backptr
    (*backptr) = newNode;
    return;
}

template <typename T>
void dequeue(qNode<T>** frontptr, qNode<T>** backptr){
    //how to determine if the queue is empty?
    if ((*frontptr) == nullptr && (*backptr) == nullptr){
        std::cout << "The queue is empty. Nothing to dequeue.\n";
        return;
    }

    // creating a temporary pointer:
    qNode<T>* tempPtr = nullptr;
    //store the frontptr to the tempPtr
    tempPtr = (*frontptr);

    //check if queue has only 1 node left??
    if ((*frontptr) == (*backptr)){
        (*frontptr) = nullptr;
        (*backptr) = nullptr;
        delete tempPtr;
        return;
    }

    //update the frontptr
    (*frontptr) = (*frontptr)->next;
    // point the tempPtr -> next to null
    tempPtr->next = nullptr;
    delete tempPtr;
    
}

template <typename T>
void display(qNode<T>* frontPtr){
    //catch if the queue is empty
    if(frontPtr == nullptr) {
        std::cout << "Queue Empty\n";
        return;
    }
    //temp pointer to store the front ptr
    qNode<T>* current = frontPtr;

    //create a loop that will print the tempPtr->data
    while(current != nullptr){
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
    return;
}

#endif
