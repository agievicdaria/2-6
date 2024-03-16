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
    cout << "Initial cylinders: " << myCar.GetCylinders() << endl;
    cout << "Initial power: " << myCar.GetPower() << endl;

    ++myCar;
    cout << "Cylinders after prefix increment: " << myCar.GetCylinders() << endl;

    myCar++;
    cout << "Power after postfix increment: " << myCar.GetPower() << endl;

    --myCar;
    cout << "Cylinders after prefix decrement: " << myCar.GetCylinders() << endl;

    myCar--;
    cout << "Power after postfix decrement: " << myCar.GetPower() << endl;

    cout << "Number of outer class objects: " << Lorry::getCount() << endl;
    cout << "Number of inner class objects: " << Lorry::Car::getInnerCount() << endl;

    return 0;
}