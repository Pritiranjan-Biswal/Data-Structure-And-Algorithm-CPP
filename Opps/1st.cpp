#include<bits/stdc++.h>
using namespace std;


class Customer
 {
    string name;
    int acc_no;
    int balance;

    public:
    //Default
    Customer()
    {
        name="kuna";
        acc_no=2;
    }
    void display() 
    {
        cout<<name <<" "<<acc_no;
    }
 };


















int main() {
    Customer A1;
    A1.display();

}