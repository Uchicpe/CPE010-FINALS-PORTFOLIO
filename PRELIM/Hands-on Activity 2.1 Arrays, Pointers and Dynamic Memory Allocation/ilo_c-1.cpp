#include <iostream>
#include <string>

class Fruits{
private:
    std::string* fruit;
    double price;
    int quantity;

public:
    // Constructor
    Fruits(std::string newFruit, int priceF, int quantityF){
        fruit = std::move(newFruit);
        price = priceF;
        quantity = quantityF;
    }

    // Destructor
    ~Fruits(){
    }  

    // Copy Assignment Operator
    Fruits& operator=(const Fruits& copy){
        if(this != &copy){
            fruit = copy.fruit;
            price = copy.price;
            quantity = copy.quantity;
        }
        return *this;
    }

    // Copy Constructor
    Fruits(const Fruits& copy){
        fruit = copy.fruit;
        price = copy.price;
        quantity = copy.quantity;
    }
    void displayAttributes() const{
        std::cout << fruit << ":" << " PHP " << price << " x" << quantity << std::endl;
    }

    int getPrice() const{
        return price;
    }

    int getQuantity() const{
        return quantity;
    }
};

class Vegetables{
private:
    std::string* vegetables;
    double price;
    int quantity;

public:
    // Constructor
    Vegetables(std::string newVegetables, int priceV, int quantityV){
        vegetables = std::move(newVegetables);
        price = priceV;
        quantity = quantityV;
    }

    // Destructor
        ~Vegetables(){
        }

    // Copy Constructor
    Vegetables(const Vegetables& copy){
        vegetables = copy.vegetables;
        price = copy.price;
        quantity = copy.quantity;
    }

    // Copy Assignment Operator
    Vegetables& operator=(const Vegetables& copy){
        if(this != &copy){
            vegetables = copy.vegetables;
            price = copy.price;
            quantity = copy.quantity;
        }
        return *this;
    }

    void displayAttributes() const{
        std::cout << vegetables << ":" << " PHP " << price << " x" << quantity << std::endl;
    }

    int getPrice() const{
        return price;
    }

    int getQuantity() const{
        return quantity;
    }
};

// Total Sum Function
void totalSum(Fruits *fruits[], int fruitzSize,
              Vegetables *vegetables[], int vegetablesSize)
{
    int total = 0;

    for(int i = 0; i < fruitzSize; i++){
        if(fruits[i] != nullptr){
            total += fruit[i]->getPrice() * fruit[i]->getQuantity();
        }
    }

    for(int i = 0; i < vegetablesSize; i++){
        if(vegetables[i] != nullptr){
            total += vegetables[i]->getPrice() * vegetables[i]->getQuantity();
        }
    }

    std::cout << "\nTotal Sum: PHP " << total << std::endl;
}

int main(){

    const int sizeF = 3, sizeV = 3;

    Fruit *fruit[sizeF];
    Vegetable *vegetable[sizeV];

    fruit[0] = new Fruit("Orange", 70, 6);
    fruit[1] = new Fruit("Papaya", 150, 7);
    fruit[2] = new Fruit("Watermelon", 250, 8);

    vegetable[0] = new Vegetable("Ampalaya", 180, 8);
    vegetable[1] = new Vegetable("Cucumber", 140, 9);
    vegetable[2] = new Vegetable("Lettuce", 150, 10);

    std::cout << "Jenna's Grocery List" << std::endl;

    for(int i = 0; i < sizeF; i++){
        fruit[i]->displayAttributes();
    }

    for(int i = 0; i < sizeV; i++){
        vegetable[i]->displayAttributes();
    }

    totalSum(fruit, sizeF, vegetable, sizeV);

    // Problem 4
    delete vegetable[2];
    vegetable[2] = nullptr;

    for(int i = 0; i < sizeF; i++){
        delete fruit[i];
        fruit[i] = nullptr;
    }

    delete vegetable[0];
    vegetable[0] = nullptr;

    return 0;
}
