#include <iostream>
#include <string>

class Array {
public:    
    char maxArray[100];
    int top;
    
    Array() {
        top = -1;
    }
    bool isEmpty() {
        return top == -1;
    }
    bool isFull() {
        return top == 100 - 1;
    }
    void push(char character) {
        if (!isFull()) {
            maxArray[++top] = character;
        }
    }
    char pop() {
        if (!isEmpty()) {
            return maxArray[top--];
        }
        return '\0';
    }
};

bool symbols(char open, char close) {
    return (open == '(' && close == ')') || (open == '{' && close == '}') || (open == '[' && close == ']');
}

bool pushSymbols(std::string expression) {
    Array stack;
    for (char character : expression) {
        if (character == '(' || character == '{' || character == '[') {
            stack.push(character);
        }
        else if (character == ')' || character == '}' || character == ']') {
            if (stack.isEmpty())
                return false;           
            char top = stack.pop();
            if (!symbols(top, character))
                return false;
        }
    }
    return stack.isEmpty();
}

int main() {
    int choice;
    while (true) {
    std::cout << "Stack using Array: " << std::endl;
    std::cout << "[1] Checking Expression [2] Exit : ";
    std::cin >> choice;
    switch(choice){
        case 1: {
        std::string expression;
        std::cout << "\nInput an expression: ";
        std::cin >> expression;

        if (pushSymbols(expression))
            std::cout << ">>> Valid Expression!\n" << std::endl;
        else
            std::cout << ">>> Not Valid Expression!\n" << std::endl;       
        break;
        }

        case 2: 
        return 0;

        default: 
        std::cout << "Try Again!\n" << std::endl;
        }
    }
    return 0;
}
