#include<iostream>
using namespace std;

int selection_sort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        int minIndex=0;
        for(int j=i+1; j<n;j++) {
            if (arr[j]<arr[minIndex]) {
                minIndex=j;
            }
            swap(arr[minIndex], arr[i]);
        }
    }
}



int main() {
    int arr[]={7,5,1,8,9};
    cout<<selection_sort(arr, 5);
}