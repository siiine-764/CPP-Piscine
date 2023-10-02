#include "Brain.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const int arraySize = 10;
    Animal* animals[arraySize];

    for (int i = 0; i < arraySize / 2; i++) {
        animals[i] = new Dog();
    }

    for (int i = arraySize / 2; i < arraySize; i++) {
        animals[i] = new Cat();
    }

    for (int i = 0; i < arraySize; i++) {
        delete animals[i];
    }

    return 0;
}
