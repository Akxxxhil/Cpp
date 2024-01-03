#include<bits/stdc++.h>
using namespace std;

class Customer {
public:
    string name;
    int acc_number;
    int balance;

    // Default Constructor
    Customer() {
        cout << "Yes, it is a constructor" << endl;
    }

    // Parameterized constructor
    Customer(string a, int b, int c) {
        name = a;
        acc_number = b;
        balance = c;
    }

    //constructor overloading
    Customer(string d,int g){
        name=d;
        acc_number=g;
    }
    Customer(string name,int acc_number,int balance){
        this ->name=name;
        this->acc_number=acc_number;
        this->balance=balance;
    }

    void display() {
        cout << name << " " << acc_number << " " << balance << " ";
    }
};

int main() {
    // Using the default constructor
    Customer c1;
    c1.display(); // This will display garbage values since c1 was not initialized with parameters

    // Using the parameterized constructor
    Customer c2("Akxxhil", 21, 40000);
    c2.display(); // This will display the values passed in the constructor
    
    Customer c3("Smruti",2134);
    c3.display();

    Customer c4 ("Anshu",12,345678);
    c4.display();

    // Using the copy constructor
    Customer c5(c4);
    c5.display();

    //for copy constructor and this constructor you need to remove the
    //Parameterized constructor fro error free

}
