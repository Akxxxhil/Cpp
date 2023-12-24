#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    
    int basicSalary;
    cin >> basicSalary;
    char grade;
    cin >> grade;

    float hra = (20.0 / 100.0) * basicSalary;
    float da = (50.0 / 100.0) * basicSalary;
    int allow;

    if (grade == 'A') {
        allow = 1700;
    } else if (grade == 'B') {
        allow = 1500;
    } else {
        allow = 1300;
    }

    float pf = (11.0 / 100.0) * basicSalary;
    float totalSalary = basicSalary + hra + da + allow - pf;

    cout << fixed << setprecision(0) << totalSalary << endl;
    //fixed means it will take for example 13.456789
    //without fixed 13.456
    //with fixed 13.456789
    //setprecison(0) means it will round up the fixed value that is 13

    return 0;
}
