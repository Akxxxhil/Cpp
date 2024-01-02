#include<bits/stdc++.h>
using namespace std;

class Student{
    string name;
    int age;
    int roll_num;

    public:
    void setName(string n){
        name=n;
    }
    void setAge(int a){
        age=a;
    }
    void setRoll(int roll){
        roll_num=roll;
    }
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    int getRoll(){
        return roll_num;
    }
};
int main(){
Student s1;
s1.setName("Akxxhil");
s1.setAge(11);
s1.setRoll(34);

s1.getAge();
s1.getAge();
cout<<s1.getName()<<endl;

}