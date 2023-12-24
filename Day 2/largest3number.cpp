#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<a<<endl;
    }
    else if(c>b && c>a){
        cout<<c<<endl;
    }
    else{
        cout<<b<<endl;
    }

    return 0;
}