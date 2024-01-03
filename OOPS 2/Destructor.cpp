#include<bits/stdc++.h>
using namespace std;

class Customer {
    string name;
    int *age;

public:
    // Parameterized constructor
    Customer(string name, int ageValue) {
        this->name = name;
        this->age = new int;  // Allocate memory for age pointer
        *this->age = ageValue;
        cout << "Constructor is called\n";
    }

    // Destructor
    ~Customer() {
        delete age;  // Deallocate memory for age pointer
        cout << "Destructor is called" << endl;
    }
};

int main() {
    // Creating an object using the parameterized constructor
    Customer c1("John", 25);

    // Note: If you want to create an object without arguments, you need to provide a default constructor
    // or use a default value for the parameters in the existing constructor.

    return 0;
}


//Destructor can be calld once.
//// Constructor calls order wsie.
//Destructor call reverse wise.