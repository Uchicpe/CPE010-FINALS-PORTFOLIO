#include <iostream>
using namespace std;

int main() {
    int num1, num2, temp;

    cout << "Input 1st number: ";
    cin >> num1;
    cout << "Input 2nd number: ";
    cin >> num2;

    cout << "\nOriginal Numbers before swapping:" << endl;
    cout << "First number = " << num1 << endl;
    cout << "Second number = " << num2 << endl;

    // swap
    temp = num1;   
    num1 = num2;
    num2 = temp;

    cout << "\nAfter swapping 1st and 2nd number:" << endl;
    cout << "First number = " << num1 << endl;
    cout << "Second number = " << num2 << endl;

    return 0;
}
