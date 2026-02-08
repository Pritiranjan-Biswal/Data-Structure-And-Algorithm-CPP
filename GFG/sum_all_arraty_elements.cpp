#include<iostream>
using namespace std;

void sum(int arr[], int n) {
    int sum=0;
    for(int i=0; i<n; i++) {
        sum=sum+arr[i];
    }
    cout<<"sum= "<<sum;
}









int main() {
    int arr[]={1,2,3};
    sum(arr, 3);
}