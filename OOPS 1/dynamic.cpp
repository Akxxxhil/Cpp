#include<bits/stdc++.h>
using namespace std;
class Student {
    public:
    string name;
    int age;
};
int main(){
Student *s=new Student;
(*s).name="Akxxhil";
(*s).age=19;
cout<<s->name<<endl;
}