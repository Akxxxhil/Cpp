#include<bits/stdc++.h>
using namespace std;
class A{
    char b;
    int d;
    char c;
};
int main (){
cout<<sizeof(A)<<endl;
}

//why the empty class have size 1 
// an empty class may have a size of 1 byte due to a concept known as "padding" or "alignment."