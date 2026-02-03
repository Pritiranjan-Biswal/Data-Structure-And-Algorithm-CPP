#include<iostream>
using namespace std;

void selection_sort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        int minIndex=i;
        for(int j=i+1; j<n; j++) {
            if(arr[j]<arr[minIndex]) {
                minIndex=j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
    cout<<"the sorted array will be: ";
    for(int i=0; i<n; i++) {

        cout<<arr[i]<<" ";
    }
}






int main() {
    int arr[]={26,2,3,5,2,8};
    selection_sort(arr, 6);
}