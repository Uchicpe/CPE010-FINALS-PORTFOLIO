#include <iostream>
#include <cmath> // importing cmath library for sqrt

float coordDistance(float x1, float y1, float x2, float y2);

int main() {
    float x1, x2, y1, y2;

    std::cout << "Input x-coordinates for 1st Point: ";
    std::cin >> x1;
    std::cout << "Input y-coordinates for 1st Point: ";
    std::cin >> y1;

    std::cout << "Input x-coordinates for 2nd Point: ";
    std::cin >> x2;
    std::cout << "Input y-coordinates for 2nd Point: ";
    std::cin >> y2;

    float distance = coordDistance(x1, y1, x2, y2);

    std::cout << "Distance between two points is: " << distance << std::endl;

    return 0;
}

float coordDistance(float x1, float y1, float x2, float y2) {
    return std::sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}
