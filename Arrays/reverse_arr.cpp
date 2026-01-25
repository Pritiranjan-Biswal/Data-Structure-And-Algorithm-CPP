#include<iostream>
using namespace std;

void rev_arr(int arr[], int n) {
    int s=0;
    int e=n-1;
    while(s<e) {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }

}

void print_arr(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
}


int main() {
    int arr[]={9, 4, 5, 52, 31};
    rev_arr(arr, 5);
    print_arr(arr, 5);
}