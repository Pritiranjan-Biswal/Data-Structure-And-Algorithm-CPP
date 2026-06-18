#include<bits/stdc++.h>
using namespace std;

int find(int arr[], int n) {
    
    int largest=INT_MIN;
    int second_largest =INT_MIN;
    for(int i=0; i<n; i++) {
        if(arr[i]>largest) {
            second_largest=largest;
            largest=arr[i];
            
        }
        else if(arr[i]<largest && arr[i]>second_largest) {
            second_largest=arr[i];
        }
    }
    if(second_largest ==INT_MIN)
    return -1;
    return second_largest;
}




int main() {
    int arr[]={8,8,7,6,5};
    cout<<find(arr,5);
}