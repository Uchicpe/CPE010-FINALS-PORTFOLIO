#include <iostream>

//Create a function that will return whether variable A is greater than variable B.

//prototyping:
int greaterVar(int varA, int varB);

int main() {
    if (greaterVar(21,19)){
        std::cout << "Variable A is greater than Variable B\n";
    } else {
        std::cout << "Variable A is NOT greater than Variable B\n";
    }
}

//define
int greaterVar(int varA, int varB) {
    return varA > varB;
}

