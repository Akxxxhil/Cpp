#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n,x;
    cin>>n>>x;
    int ans=1;
   while(x>0){
       ans=ans*n;
       x--;
   }

    cout<<ans<<endl;
}