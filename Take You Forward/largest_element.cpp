#include<iostream>
using namespace std;

void largestele(int arr[], int n) {
    int largest=arr[0];
    for(int i=1; i<n; i++) {
        if(arr[i]> largest) {
            largest=arr[i];
        }
    }
    cout<<largest;
}
int main() {
    int arr[]= {1,2,4,2,1};
    largestele(arr, 5);
}