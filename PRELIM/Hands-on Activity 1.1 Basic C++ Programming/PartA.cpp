#include<iostream>
using namespace std;

int count = 0;

class rectangle{
private:
    double recLength, recWidth;
public:
rectangle(double L, double W);
    void setLength(double L);
    void setWidth(double W);
    double getPerimeter();
};

int main(){
    rectangle shape1(2, 5);
    std::cout << "The perimeter of the rectangle is " <<
shape1.getPerimeter() << ".\n";
    std::cout << count << " number of objects created.";
    return 0;
}

rectangle::rectangle(double L, double W) {
    recLength = L;
    recWidth = W;
    count++;
}
void rectangle::setLength(double L) {
    recLength = L;
}
void rectangle::setWidth(double W) {
    recWidth = W;
}
double rectangle::getPerimeter() {
    return (2*recLength) + (2*recWidth);
}

