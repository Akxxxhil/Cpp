#include <bits/stdc++.h>

#include <iostream>

using namespace std;

 

int main() {

  

  int start, end, gap;

  // user input

  cin >> start >> end >> gap;

 

  // convert fahrenheit --> celsious using for loop

  for (int i = start; i <= end; i += gap) {

    // formulae to convert Fahrenheit to Celsius

    int Celsius = (i - 32) * 5 / 9;

 

    if (Celsius > 0) {

      cout << i << "\t" << floor(Celsius)

           << endl; // make celsius to floor(celsius)

    }

 

    else {

      cout << i << "\t" << ceil(Celsius)

           << endl; // make celsius to ceil(celsius)

    }

  }

 

  return 0;

}