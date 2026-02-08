#include<iostream>
using namespace std;

void less_than(int arr[], int n, int k) {
    for(int i=0; i<n; i++) {
        if(arr[i]<k) {
            cout<<arr[i]<<" ";

        }
    }
}







int main() {
    int arr[]={54, 43, 2, 1, 5};
    less_than(arr, 5, 6);
}