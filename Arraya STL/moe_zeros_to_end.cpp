#include<iostream>
using namespace std;



void move_zero(int arr[], int n) {
    int non_zero=0;
    for(int j=0;j<n; j++) {
        if(arr[j] !=0) {
            swap(arr[j], arr[non_zero]);
            non_zero++;
        }
    }
}

int print(int arr[], int n) {
    for(int i=0; i<n;i++) {
        cout<<arr[i]<<" ";
    }
}



int main() {
    int arr[]={0, 1, 0, 3, 12};
    move_zero(arr, 5);
    print(arr,5);
}