#include <iostream>
using namespace std;

int main() {
    // int x = 10;
    // int *ptr = &x;

    // cout << "Value of x: " << x << endl;
    // cout << "Address of x: " << &x << endl;
    // cout << "Pointer ptr stores: " << ptr << endl;
    // cout << "Value at ptr (*ptr): " << *ptr << endl;

    // int x = 10;
    // int *p = &x;
    // cout<< x <<endl;
    // cout << *p << endl;
    // cout << &x << endl;
    
    // cout<<p;

    // int i=5;
    // int *q=&i;
    // cout<<q<<endl;
    // cout<<*q<<endl;

    // int *p=0;
    // p=&i;

    // cout<<p<<endl;
    // cout<<*p<<endl;


    // int num=5;
    // int a=num;

    // cout<<"a before "<<num<<endl;
    // a++;
    // cout<<" a after "<<num<<endl;

    // int *p=&num;
    // cout<<"before "<< num<<endl;
    // (*p)++;
    // cout<<"after "<<num<<endl; 


    // int *q=p;
    // cout<<p<<"-"<<q<<endl;
    // cout<<*p<<"-"<<*q<<endl;



    int i=3;
    int *t= &i;
    *t=*t+1;
    cout<<*t<<endl;
    cout<<"before t"<<t<<endl;
    t=t+1;
    cout<<"after t"<<t<<endl;










}
