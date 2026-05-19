#include<bits/stdc++.h>
using namespace std;


class Student{
    
    string name;
    int age, roll_number;
    string grade;

    public:
    void setName(string s) {
        name=s;
    }
    string getName() {
        return name;
    }
};

int main() {
    Student s1;
    s1.setName("kuna biswal");
    cout<<s1.getName();
    
}










