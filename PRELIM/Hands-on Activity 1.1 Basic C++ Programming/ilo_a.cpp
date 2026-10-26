#include <iostream>

//Create a function that will take two numbers and display the sum.
//prototyping:
int sumOfTwoNum(int fNum, int sNum);

int main() {
    std::cout << "The sum of the two numbers is: "<< sumOfTwoNum (6,7) << std::endl;
    }

//define
int sumOfTwoNum(int fNum, int sNum) {
    return fNum + sNum;
}
