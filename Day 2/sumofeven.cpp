#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n;
    cin>>n;
    int nas=0;
    for(int i=0;i<=n;i++){
        if(i%2==0){
            nas=nas+i;
        }
    }
    cout<<nas<<endl;

    return 0;
}