/*
Name: Krish Pandya
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Car Class with Default Values
Date: 03/03/2026
*/

#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand = "Dodge";
    string model = "Charger";
    int year = 2012;

public:
    void startEngine() {
        cout << "Starting " << brand << " " << model << endl;
    }

    void accelerate() {
        cout << "Accelerating " << brand << endl;
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
This example showed how we can initialize data members directly inside the class. It simplifies object creation.

2. Difficulties:
I initially tried initializing variables inside main instead of inside the class.

3. What I learned:
I learned how default values can be assigned to class variables and automatically used when objects are created.
*/