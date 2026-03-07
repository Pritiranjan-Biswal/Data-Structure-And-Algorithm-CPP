#include<iostream>
using namespace std;


int sum(int arr[], int n) {
    
    if(n==0)
    return 0;


    if(n==1)
    return arr[0];

    return arr[0]+sum(arr+1, n-1);
    
}
int main() {
    int arr[]={2, 4, 6, 8, 9};
    int p=sum(arr, 5);
    cout<<p;
}