#include <iostream>

//global variables:
#define maxSize 10
//const size_t maxSize = 10
//const int maxSize = 10
int stackArr[maxSize];
int top = -1, newData;

//function prototypes:
// Top, Push, Pop, isEmpty, isFull

// observer operator
bool isEmpty();
bool isFull();
void Top(); // the T is capital
void displayAll(); // goal is to display the stack following the LIFO principle

// transformer operator
void push();
void pop();


int main(){
    int choice;
    while (true) {
        std::cout << "===========================\n";
        std::cout << "Stack Operatoins: " <<std::endl;
        std::cout << "[1] Push [2] Pop [3] isEmpty [4] isFull [5] Top [6] Display All" << std::endl;
        std::cin >> choice;
        switch(choice) {

            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: std::cout << "is the stack empty? " << isEmpty() << std::endl;
            break;
            case 4: std::cout << "is the stack full? " << isFull() << std::endl;
            break;
            case 5: Top();
            break;
            case 6: displayAll();
            break;
            default: std::cout << "Invalid Choice! " <<std::endl;
        }
    }
    return 0;
}

//function definition
bool isEmpty(){
    return (top == -1);
}

bool isFull(){
    return (top == maxSize-1);
}

void Top(){
    //error catching:
    if (isEmpty()) {
        std::cout << "Stack Underflow! " <<std::endl;
        return;
    }

    //prints the top element
    std::cout << "The top element is: " << stackArr[top] << std::endl;
}

void push(){
    //error catching
    if (isFull()) {
        std::cout << "Stack Overflow! " <<std::endl;
        return;
    }

    //ask the user what they want to insert:
    std::cout << "What character do you want to push? ";
    std::cin >> newData;


    //storing to the stack:
    stackArr[++top] = newData;

}

void pop(){
    // error catching:
    if (isEmpty()) {
        std::cout << "Stack Underflow! " <<std::endl;
    }

    // display the item to be popped:
    std::cout << "Popping: " << stackArr[top] <<std::endl;

    // we remove the element from the stack
    top--;

}

// Displaying Stack's Elements
void displayAll() {
    // error catching:
    if (top == -1) {
        std::cout << "Stack Underflow! " <<std::endl;
        return;
    }

    std::cout << "\n";
    for (int i = top; i >= 0; --i) {
        std::cout << stackArr[i] << std::endl;
    }
    return;
}
