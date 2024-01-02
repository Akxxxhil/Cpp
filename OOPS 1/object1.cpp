#include<iostream>
#include <string>
using namespace std;

class Student{
    public:
    string name;
    int age;
    int rollno;
    string grade;

};
int main (){
Student s1;
s1.name="Akxxhil";
s1.age=89;
s1.rollno=19;
s1.grade="A+";

cout<<s1.name<<endl;
cout<<s1.grade<<endl;
}

// inside the class the userdefined data type is always private
// to make it accessible you need to convert it from private to public
// we can access the variable with . operator
//here the s1 is the object of student class
