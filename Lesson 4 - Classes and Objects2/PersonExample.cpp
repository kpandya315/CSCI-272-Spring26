/*
Name: Krish Pandya
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Person Class Example
Date: 03/03/2026
*/

#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name = "Krish";
    int age = 19;
    char gender = 'M';

    void introduce() {
        cout << "Hello, I'm " << name << ". I'm "
             << age << " years old. ";

        if (gender == 'M')
            cout << "I'm a male." << endl;
        else if (gender == 'F')
            cout << "I'm a female." << endl;
        else
            cout << "Gender unspecified." << endl;
    }
};

int main() {
    Person person1;
    person1.introduce();
    return 0;
}

/*
Reflection:

1. What I understood:
This example demonstrated how classes can store attributes and include conditional logic in member functions.

2. Difficulties:
I had to pay attention to using the correct comparison operator in the if statement.

3. What I learned:
I learned how objects can contain both data and behavior together.
*/