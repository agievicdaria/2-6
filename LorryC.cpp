#include "LorryC.h"
#include <iostream>
#include <sstream>
using namespace std;

int Lorry::count = 0;
int Lorry::Car::innerCount = 0;

Lorry::Car::Car() {
    brand = "";
    cylinders = 0;
    power = 0.0;
    Lorry::Car::innerCount++;
}

Lorry::Car::Car(const string& brand, int cylinders, double power) {
    this->brand = brand;
    this->cylinders = cylinders;
    this->power = power;
    Lorry::Car::innerCount++;
}

Lorry::Car::Car(const Car& secondCar) {
    this->brand = secondCar.brand;
    this->cylinders = secondCar.cylinders;
    this->power = secondCar.power;
    Lorry::Car::innerCount++;
}

Lorry::Car::~Car() {
    Lorry::Car::innerCount--;
}

Lorry::Car::operator string() const {
    stringstream sout;
    sout << "Brand: " << brand << ", Cylinders: " << cylinders << ", Power: " << power << endl;
    return sout.str();
}

Lorry::Car& Lorry::Car::operator=(const Car& secondCar) {
    if (this != &secondCar) {
        brand = secondCar.brand;
        cylinders = secondCar.cylinders;
        power = secondCar.power;
    }
    return *this;
}

ostream& operator<<(ostream& out, const Lorry::Car& car) {
    out << string(car);
    return out;
}

istream& operator>>(istream& in, Lorry::Car& car) {
    cout << "Enter brand: ";
    in >> car.brand;
    cout << "Enter cylinders: ";
    in >> car.cylinders;
    cout << "Enter power: ";
    in >> car.power;
    return in;
}

Lorry::Car& Lorry::Car::operator++() {
    cylinders++;
    return *this;
}

Lorry::Car Lorry::Car::operator++(int) {
    Car c = *this;
    power++;
    return c;
}

Lorry::Car& Lorry::Car::operator--() {
    cylinders--;
    return *this;
}

Lorry::Car Lorry::Car::operator--(int) {
    Car c = *this;
    power--;
    return c;
}

Lorry::Lorry() {
    car = Car();
    payload = 0.0;
    count++;
}

Lorry::Lorry(const Car& car, double payload) {
    this->car = car;
    this->payload = payload;
    count++;
}

Lorry::Lorry(const Lorry& secondLorry) {
    this->car = secondLorry.car;
    this->payload = secondLorry.payload;
    count++;
}

Lorry::~Lorry() {
    Lorry::count--;
}

Lorry::operator string() const {
    stringstream sout;
    sout << "Car: " << car << "Payload: " << to_string(payload) << endl;
    return sout.str();
}

Lorry& Lorry::operator=(const Lorry& secondLorry) {
    if (this != &secondLorry) {
        car = secondLorry.car;
        payload = secondLorry.payload;
    }
    return *this;
}

ostream& operator<<(ostream& out, const Lorry& lorry) {
    out << string(lorry);
    return out;
}

istream& operator>>(istream& in, Lorry& lorry) {
    cout << "Enter car details:\n";
    in >> lorry.car;
    cout << "Enter payload: ";
    in >> lorry.payload;
    return in;
}

Lorry& Lorry::operator++() {
    car++;
    return *this;
}

Lorry Lorry::operator++(int) {
    Lorry l = *this;
    payload++;
    return l;
}

Lorry& Lorry::operator--() {
    car--;
    return *this;
}

Lorry Lorry::operator--(int) {
    Lorry l = *this;
    payload--;
    return l;
}
