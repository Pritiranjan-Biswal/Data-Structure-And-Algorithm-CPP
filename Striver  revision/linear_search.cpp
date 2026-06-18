#include<bits/stdc++.h>
using namespace std;


int linear_search(int arr[], int n, int target) {
    int s=0, e=n-1;
    for(int i=0; i<n; i++) {
        if(arr[i]==target) {
            return i;
        }
    }
    return -1;
}









int main() {
    int arr[]={2, 3, 4, 5, 3};
    int ans=linear_search(arr, 5, 3);
    cout<<ans;
}