#include<iostream>
using namespace std;

bool sorted_arr(int arr[], int n) {
    int  count=0;
    for(int i=0; i<n-1; i++) {
        if(arr[i]>arr[i+1]) {
            count++;
        }
    
    }
    if(arr[n-1]>arr[0]) {
        count++;
        }
    return count<=1;
}


int main() {
    int arr[]={3,4,5,1,2};
    bool t=sorted_arr(arr,5);
    if(t) {
        cout<<"yes";
    }
    else {
        cout<<"no";
    }
}