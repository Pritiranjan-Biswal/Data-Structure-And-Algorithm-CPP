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



    // int i=3;
    // int *t= &i;
    // *t=*t+1;
    // cout<<*t<<endl;
    // cout<<"before t"<<t<<endl;
    // t=t+1;
    // cout<<"after t"<<t<<endl;

    //int arr[10]={1, 4, 3};
    // cout<<"the address of the first memory block is : "<<arr<<endl;
    // cout<<"the address of the first memory block is : "<<&arr[0]<<endl;

    // cout<<*arr;
    // cout<<(*arr)+1;
    // cout<< &arr[0]<<endl;
    // cout<<arr;


    // cout<<sizeof(arr)<<endl;
    //int *ptr=&arr[0];
    // cout<<sizeof(ptr)<<endl;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;
    // cout<<sizeof(*ptr)<<endl;
    // cout<<&ptr;


    int arr[10];
    //arr=arr+1;
    // cout<<arr;

    int *ptr= &arr[0];
    cout<<ptr<<endl;
    ptr=ptr+1;
    cout<<ptr<<endl;


}
