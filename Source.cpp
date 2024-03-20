#include "LorryC.h"
#include <iostream>
using namespace std;

int main() {
    Lorry::Car c;
    cout << "Enter car details:\n";
    cin >> c;
    cout << c;

    Lorry l;
    cout << "Enter lorry details:\n";
    cin >> l;
    cout << l;

    Lorry::Car myCar("bmw", 4, 200.0);
    cout << "Initial values: " << myCar << endl;

    ++myCar;
    cout << "After prefix increment: " << myCar << endl;

    myCar++;
    cout << "After postfix increment: " << myCar << endl;

    --myCar;
    cout << "After prefix decrement: " << myCar << endl;

    myCar--;
    cout << "After postfix decrement: " << myCar << endl;

    cout << "Number of outer class objects: " << Lorry::getCount() << endl;
    cout << "Number of inner class objects: " << Lorry::Car::getInnerCount() << endl;

    return 0;
}