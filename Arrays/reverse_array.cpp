#include<iostream>
using namespace std;


void rev_arr(int arr[], int n) {
    int s=0;
    int e=n-1;
    while(s<=e) {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int main() {
    int arr[]={2,3,5,6,2,11,2,5,6,7};
    rev_arr(arr, 10);

    for(int i=0; i<10;i++) {
        cout<<arr[i]<<" ";
    }
}