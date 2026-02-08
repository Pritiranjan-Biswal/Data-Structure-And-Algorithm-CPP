#include<iostream>
#include<climits>
using namespace std;

void largest_ele(int arr[], int n) {
    int max=INT_MIN;
    for(int i=0; i<n; i++) {
        if(arr[i]>max) {
            max=arr[i];
        }
    }
    cout<<max;
}






int main() {
    int arr[]={1,245,7,5,90};
    largest_ele(arr, 5);
}