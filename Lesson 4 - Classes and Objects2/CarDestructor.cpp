/*
Name: Krish Pandya
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Destructor Example
Date: 03/03/2026
*/

#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;

public:
    Car() {
        brand = "Dodge";
    }

    ~Car() {
        cout << "Object destroyed." << endl;
    }

    void startEngine() {
        cout << "Starting " << brand << endl;
    }
};

int main() {
    Car car1;
    car1.startEngine();
    return 0;
}

/*
Reflection:

1. What I understood:
I understood that destructors run automatically when an object goes out of scope.

2. Difficulties:
I initially forgot that destructors do not have a return type.

3. What I learned:
I learned that destructors are important for cleaning up resources and managing object lifecycle.
*/