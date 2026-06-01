#include<bits/stdc++.h>
using namespace std;


class Customer
 {
    string name;
    int acc_no;
    int balance;

    public:
    //Default
    Customer(string name, int acc_no, int balance)
    {
        this->name=name;
        this->acc_no=acc_no;
        this->balance=balance;
    }

    inline Customer(string a, int b, int c) : name(a), acc_no(b), balance(c);
     
    void display() 
    {
        cout<<this->name <<" "<<this->acc_no<<" "<<this->balance;
    }
 };

int main() {
    Customer A1("kuna",121234,2113);
  
    Customer A2;

    A1.display();
    A2.display();


}