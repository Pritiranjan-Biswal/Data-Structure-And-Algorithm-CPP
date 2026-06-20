#include<bits/stdc++.h>
using namespace std;

int sliding_window(int arr[], int n, int k) {
    int maxLen=0;
    int sum=arr[0];
    int r=0, l=0;
    while(r<n) {
        while(sum>k && l<=r) {
            sum-=arr[l];
            l++;
        }
        if(sum==k){
            maxLen=max(maxLen, r-l+1);
        }
        r++;
        if(r<n) {
            sum+=arr[r];
        }

    }
    return maxLen;
}



int main(){
    int arr[]= {1, 2, 3, 1, 1, 1 };
    cout<<sliding_window(arr, 6, 3);
}   