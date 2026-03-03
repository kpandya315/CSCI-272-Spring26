/*
Name: Krish Pandya
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Constructors Example
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
    Car() {
        brand = "Dodge";
        model = "Charger";
        year = 2017;
    }

    Car(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
    }

    Car(const Car &other) {
        brand = other.brand;
        model = other.model;
        year = other.year;
    }

    void startEngine() {
        cout << "Starting " << brand << " " << model << endl;
    }
};

int main() {
    Car car1;
    Car car2("Dodge", "Durango", 2022);
    Car car3(car2);

    car1.startEngine();
    car2.startEngine();
    car3.startEngine();

    return 0;
}

/*
Reflection:

1. What I understood:
I understood the difference between default, parameterized, and copy constructors. The copy constructor creates a new object based on another existing object.

2. What I learned:
I learned how constructors initialize objects and how overloading allows multiple ways to create objects.
*/