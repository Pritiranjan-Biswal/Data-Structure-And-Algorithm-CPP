#include<iostream>
using namespace std;

void dupl(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        if(arr[i]!= arr[i+1]) {
            arr[i]=arr[i+1];
        }
    }
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
}






int main() {
    int arr[]={0,0,1,1,1,2,2,3,3,4};
    dupl(arr, 10);
}




