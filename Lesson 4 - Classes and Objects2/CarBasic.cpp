/*
Name: Krish Pandya
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Basic Car Class
Date: 03/03/2026
*/

#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;

public:
    void startEngine() {
        cout << "Engine started." << endl;
    }

    void accelerate() {
        cout << "Car is accelerating." << endl;
    }
};

int main() {
    Car car1;
    car1.startEngine();
    car1.accelerate();
    return 0;
}

/*
Reflection:

1. What I understood:
I understood that a class is a blueprint for creating objects. The private variables store the data, and the public functions allow interaction with that data. This example showed how methods belong to a class.

2. Research:
I reviewed how C++ class syntax works and how member functions are defined inside a class.

3. What I learned:
I learned how to define a simple class and create an object that calls its methods.
*/