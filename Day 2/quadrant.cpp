#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int x,y;
    cin>>x>>y;
    if(x>0 && y>0){
        cout<<"1st Quadrant"<<endl;
    }
     else if(x<0 && y>0){
        cout<<"2nd Quadrant"<<endl;
    }
    else if(x<0 && y<0){
        cout<<"3rd Quadrant"<<endl;
    }
    else if(x>0 && y<0){
        cout<<"4th Quadrant"<<endl;
    }
    else if(x==0 && y==0){
        cout<<"Origin"<<endl;
    }
    else if(x==0 && y!=0){
        cout<<"y axis"<<endl;
    }
    else{
        cout<<"x axis"<<endl;
    }
   

    return 0;
}