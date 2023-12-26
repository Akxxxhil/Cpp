#include<iostream>
using namespace std;

void func(int x) {
    x = 50;
    cout << "Value of x in func function: " << x << endl;
}

//Main Code
int main() {
    int x = 10;
    func(x);
    cout << "Value of x in main function: " << x;
}




// Output:
// Value of x in func function: 50
// Value of x in main function: 10