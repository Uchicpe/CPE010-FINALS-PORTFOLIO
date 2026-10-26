#include <iostream>

class Triangle {
private:
    double totalAngle, angleA, angleB, angleC;

public:
    Triangle(double A, double B, double C);
    void setAngle(double A, double B, double C);
    bool validateTriangle(); //remove const
};

Triangle::Triangle(double A, double B, double C) {
    angleA = A;
    angleB = B;
    angleC = C;
    totalAngle = A + B + C;
}

void Triangle::setAngle(double A, double B, double C) {
    angleA = A;
    angleB = B;
    angleC = C;
    totalAngle = A + B + C;
}

// Used AI on how to validate Triange
bool Triangle::validateTriangle() {
    return (totalAngle == 180.0 && angleA > 0 && angleB > 0 && angleC > 0);
}

int main() {
    //driver code
    Triangle set1(40, 30, 110); 

    if (set1.validateTriangle()) {
        std::cout << "The shape is a valid triangle. \n";
    } else {
        std::cout << "The shape is not a valid triangle. \n";
    }

    return 0;
}
