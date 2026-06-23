#include<bits/stdc++.h>
using namespace std;

int sliding_window(vector<int>arr, int k) {
    int n = arr.size();
    int right =0,left =0;
    int maxLen=0;
    long long sum=arr[0];
    while(right<n) {
        while(left<=right && sum>k) {
            sum-=arr[left];
            left++;
        }
        if(sum==k) {
            maxLen=max(maxLen, right-left+1);
        }
        right++;
        if(right<n) {
            sum+=arr[right];
        }
    }
    return maxLen;
}







int main() {
    vector<int> arr={1, 2, 3, 1, 1, 1 };
    cout<<sliding_window(arr, 6);
}