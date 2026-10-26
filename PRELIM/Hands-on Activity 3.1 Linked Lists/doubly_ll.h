#ifndef DOUBLY_LL_H
#define DOUBLY_LL_H

//Doublelist Node
template <typename T>
class Doublylist{
    public:
        T data;
        Doublylist<T>* next;
        Doublylist<T>* prev;
};

template <typename T>
Doublylist<T> *createNode(T newData){
    //dynamic memory allocation for the new node
    Doublylist<T>* newNode= new Doublylist<T>;

    newNode->data = newData;
    //point it to the next node
    newNode->prev = nullptr;
    newNode->next = nullptr;

    return newNode;
}

template <typename T>
void dllTraverse(Doublylist<T>* currentNode){
    //check if the list is empty
    if(currentNode == nullptr){
        std::cout << "The list is empty";
        return;
    }

    Doublylist<T>* tail;

    std::cout<<"FORWARD"<<std::endl;
    //forward traverse
    while(currentNode != nullptr){
        std::cout << currentNode->data << " ";
        tail = currentNode;
        currentNode=currentNode->next;
    }
    std::cout<<std::endl;
    //reverse traverse
    std::cout<<"REVERSE"<<std::endl;
    while(tail != nullptr){
        std::cout<<tail->data<<" ";
        tail= tail->prev;
    }
    std::cout<<std::endl;

}

//inserting a node to the head
template <typename T>
void dllInsertHead(T newData, Doublylist<T>** currentNode){

    // create a new node:
    Doublylist<T> *newNode = createNode(newData);
    //point the newNode to the currentNode (head)
    newNode->next = *currentNode;
    //point the currentNode(head) to the newNode
    (*currentNode)->prev = newNode;
    //updating the header pointer
    *currentNode = newNode;
}

//inserting at the End
template <typename T>
void dllInsertEnd(T newData, Doublylist<T> *currentHead) {
    // create a new node
    Doublylist<T>* newNode = createNode(newData);

    //traverse until we reach the last node
    while(currentHead->next != nullptr) {
        currentHead = currentHead->next;
    }

    //connect the new node back to the last node
    newNode->prev = currentHead;
    //connect the current node to the new node
    currentHead->next = newNode;
}

//General inserting
template <typename T>
void dllGeneralInsert(T newData, Doublylist<T> *currentNode) {

    Doublylist<T>* newNode = createNode(newData);

    newNode->next = currentNode->next;
    newNode->prev = currentNode;

    if(currentNode->next != nullptr) {
        currentNode->next->prev = newNode;
    }

    currentNode->next = newNode;    
}

//Deleting Node
template <typename T>
void dllDeleteNode(T findData, Doublylist<T>** head)
{
    if(*head == nullptr) return;

    Doublylist<T>* currNode =  *head;
    while (currNode->next != nullptr) {
        currNode = currNode->next;
    }

    while(currNode != nullptr && currNode->data != findData){
        currNode = currNode->prev;
    }

    if(currNode == nullptr) return;

    if(currNode->prev != nullptr){
        currNode->prev->next = currNode->next;
    }
    else {
        *head = currNode->next;
    }

    if (currNode->next != nullptr) {
        currNode->next->prev = currNode->prev;
    }

    delete currNode;

}

#endif