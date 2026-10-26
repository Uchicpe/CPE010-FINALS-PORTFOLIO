#include <iostream>
#include <stack>

int main(){

    // push 

    // pop 

    // isEmpty 

    // isFull 

    // Top

    // create an object:
    std::stack<char> stack1;
    std::stack<char> stack2;

    std::cout << "Is the stack empty? " << stack1.empty() << std::endl;
    stack1.push('j');
    std::cout << "Is the stack empty? " << stack1.empty() << std::endl;
    std::cout << "Current top of the stack: " << stack1.top() <<std::endl;
    std::cout <<stack1.size();
    stack1.push('i');
    std::cout << "Current top of the stack: " << stack1.top() <<std::endl;
    stack1.push('m');
    std::cout << "Current top of the stack: " << stack1.top() <<std::endl;
    std::cout << "Is the stack empty? " << stack1.empty() << std::endl;
    std::cout << "What is the size of the stack? " << stack1.size() << std::endl;


    // swap testing
    stack2.push('c');
    stack2.push('o');
    stack2.push('w');
    std::cout << "\nBefore Swap: " <<std::endl;
    std::cout << "Current top of the stack1: " << stack1.top() <<std::endl;
    std::cout << "Current top of the stack2: " << stack2.top() <<std::endl;
    stack1.swap(stack2);
    std::cout << "\nAfter Swap: " <<std::endl;
    std::cout << "Current top of the stack1: " << stack1.top() <<std::endl;
    std::cout << "Current top of the stack2: " << stack2.top() <<std::endl;

    // emplace testing
    std::cout << "\nBefore Emplace: " <<std::endl;
    std::cout << "Current top of the stack: " << stack1.top() <<std::endl;
    stack1.emplace('k');
    std::cout << "\nAfter Emplace: " <<std::endl;
    std::cout << "Current top of the stack: " << stack1.top() <<std::endl;

    return 0;
}
