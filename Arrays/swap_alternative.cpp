//input :-arr=[1, 2, 7, 8, 9]  o/p: [2, 1, 8, 7, 9]


#include<iostream>
using namespace std;

void swap_alter(int arr[], int n) {
    for(int i=0; i<n; i=i+2) {
        if(i+1 < n) {
            swap(arr[i], arr[i+1]);
        }
    }
}


void print_arr(int arr[], int n) {
    for(int i=0; i<n;i++) {
    cout<<arr[i]<<" ";
}
}

int main() {
    int arr[]= {1, 2, 7, 8, 9};
    swap_alter(arr, 5);
    print_arr(arr, 5);
}