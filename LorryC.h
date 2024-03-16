#pragma once
#include <string>
#include <iostream>
using namespace std;

class Lorry {
public:
    class Car {
    private:
        string brand;
        int cylinders;
        double power;
        static int innerCount;
    public:
        Car();
        Car(const string& brand, int cylinders, double power);
        Car(const Car& secondCar);
        ~Car();

        const string& GetBrand() const { return brand; }
        int GetCylinders() const { return cylinders; }
        double GetPower() const { return power; }
        void SetBrand(const string& brand) { this->brand = brand; }
        void SetCylinders(int cylinders) { this->cylinders = cylinders; }
        void SetPower(double power) { this->power = power; }

        static int getInnerCount() { return innerCount; }

        string toString() const;

        Car& operator++();
        Car operator++(int);
        Car& operator--();
        Car operator--(int);
        Car& operator=(const Car& secondCar);

        friend ostream& operator<<(ostream& out, const Car& car);
        friend istream& operator>>(istream& in, Car& car);
    };

private:
    Car car;
    double payload;
    static int count;

public:
    Lorry();
    Lorry(const Car& car, double payload);
    Lorry(const Lorry& secondLorry);
    ~Lorry();

    void SetCar(const Car& car) { this->car = car; }
    void SetPayload(double payload) { this->payload = payload; }
    Car GetCar() const { return car; }
    double GetPayload() const { return payload; }

    string toString() const;

    Lorry& operator++();
    Lorry operator++(int);
    Lorry& operator--();
    Lorry operator--(int);
    Lorry& operator=(const Lorry& secondLorry);
    friend ostream& operator<<(ostream& out, const Lorry& lorry);
    friend istream& operator>>(istream& in, Lorry& lorry);

    static int getCount() { return count; }
};