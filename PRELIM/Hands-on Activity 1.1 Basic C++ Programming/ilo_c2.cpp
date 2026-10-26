#include <iostream>
#include <iomanip>

float kelToFar(float kelvin);

int main() {
    float kelvin_num = 0;

    std::cout << "Kelvin to Fahrenheit Conversion" << std::endl;
    std::cout << "Input temperature in Kelvin: ";
    std::cin >> kelvin_num;

    float fahrenheit = kelToFar(kelvin_num);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Fahrenheit: " << fahrenheit << " °F" << std::endl;

    return 0;
}

float kelToFar(float kelvin) {
    return ((kelvin - 273) * 1.8) + 32;
}
