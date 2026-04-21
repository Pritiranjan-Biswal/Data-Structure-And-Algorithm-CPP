#include<bits/stdc++.h>
using namespace std;

int count(int arr[], int n, int target) {
    int count=0;
    for(int i=0; i<n; i++) {
        if(arr[i]==target) {
            count++;
        }
    }
    return count;
}










int main() {
    int arr[]={0,0,1,1,1,2,3};
    cout<<count(arr,7, 1);
}