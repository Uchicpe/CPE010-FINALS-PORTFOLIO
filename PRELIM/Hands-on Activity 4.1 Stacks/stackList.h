#ifndef STACK_LIST_H
#define STACK_LIST_H

// class node that contains data and the next
template <typename T>
class Node {
    public:
    T data;         // VALUE THAT WE NEED STORE
    Node* next;     // POINTER TO THE NEXT NODE
};

//global pointer for the top of the stack
template <typename T>
Node<T> *head = nullptr;

// operations for the stack
// push
template <typename T>
void push(T newData){

    Node<T>* newNode = new Node<T>;
    newNode->data = newData;

    newNode->next = head<T>;
    head<T> = newNode;
};

//isEmpty    
template<typename T>
bool isEmpty(){
    return head<T> == nullptr;
}

//pop
template <typename T>
T pop(){
    //check if the stack is empty
    if(head<T> == nullptr){
        std::cout << "Stack overflow" << std::endl;
    }

    //save the current top node
    Node<T>* temp = head<T>;
    //store its data
    T tempVal = temp->data;

    // move the head to the next node
    head<T> = head<T>->next;
    // free the removed node
    delete temp;
    //return the removed node
    return tempVal;
}

//Top
template <typename T>
void Top(){

    if(isEmpty<T>()){
        std::cout << "[ Stack underflow ]" <<std::endl;
        return;
    }

    std::cout <<"Top of the Stack: " << head<T>->data << std::endl;
}

//displayAll
template <typename T>
void displayAll(){
    if(head<T> == nullptr) {
        std::cout << "Stack underflow\n";
        return;
    }
    std::cout << "Displaying the stack: \n";
    Node<T>* temp = head<T>;
    while(temp != nullptr){
        std::cout << temp->data << "\n";
        temp = temp->next;
    }
    std::cout <<"\n";
}

#endif