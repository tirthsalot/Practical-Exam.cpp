#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() = 0;
    virtual void move() = 0;

    virtual ~Animal() {}
};

class Lion : public Animal {
public:
    void makeSound() override {
        cout << "Lion roars" << endl;
    }

    void move() override {
        cout << "Lion runs" << endl;
    }
};

class Fish : public Animal {
public:
    void makeSound() override {
        cout << "Fish makes bubbles" << endl;
    }

    void move() override {
        cout << "Fish swims" << endl;
    }
};

int main() {
    Animal* animals[2];

    animals[0] = new Lion();
    animals[1] = new Fish();

    for (int i = 0; i < 2; i++) {
        animals[i]->makeSound();
        animals[i]->move();
        cout << endl;
    }

    for (int i = 0; i < 2; i++) {
        delete animals[i];
    }

    return 0;
}