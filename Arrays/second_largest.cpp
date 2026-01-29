#include<iostream>
#include<climits>
using namespace std;


int get_Sec(int arr[], int n) {
    if (n<2)
    return -1;

    int largest=INT_MIN;
    int second=INT_MIN;
    for(int i=0; i<n; i++) {
        if (arr[i]>largest) {
            second=largest;
            largest=arr[i];
            
        }
        else if (arr[i]<largest && arr[i]>second) {
            second=arr[i];
        }
    }
    if (second == INT_MIN)
    return -1;

    return second;
}

int main() {
    int arr[]={5,3,2,7,9,11};
    cout<<get_Sec(arr,  6);
}