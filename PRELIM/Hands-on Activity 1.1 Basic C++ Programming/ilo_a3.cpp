#include <iostream>

// Create a function that will take two Boolean values and display the result of all logical operations then
// return true if it was a success.
bool logicOperation(bool a, bool b) {
    std::cout << std::boolalpha; //displays Boolean values
    
    std::cout << "Boolean Logical Operators" << std::endl;
    std::cout << "If a = " << a << " and b = " << b << ", then..." << std::endl;

    std::cout << "AND (a && b)   : " << (a && b) << std::endl;
    std::cout << "OR  (a || b)   : " << (a || b) << std::endl;
    std::cout << "NOT (!a)       : " << (!a) << std::endl;
    std::cout << "NOT (!b)       : " << (!b) << std::endl;
    
    return true;
}

int main() {
    return logicOperation(true, false);
}
