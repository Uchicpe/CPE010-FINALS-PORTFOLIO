#include <iostream>
#include "stackList.h"

int main() {

    std::cout << " >>> Pushing 'C' 'P' 'E' onto the stack <<< \n";
    //push
    push('C');
    push('P');
    push('E');

    //display the current top
    Top<char>(); // Top should be 'e'
    displayAll<char>();
    std::cout << "\n >>> Popping all the elements <<< \n";

    while(!isEmpty<char>()){
        std::cout <<" Popped: " << pop<char>() << std::endl;
    }

    std::cout << "\n>>> Testing the Underflow <<< \n";
    pop<char>();

    return 0;
}
