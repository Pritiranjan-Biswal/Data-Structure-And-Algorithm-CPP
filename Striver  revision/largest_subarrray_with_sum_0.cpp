#include<bits/stdc++.h>
using namespace std;


int subarr(int arr[], int n) {
    int sum=0;
    int maxLen=0;
    unordered_map<int , int>mp;
    for(int i=0; i<n; i++)  
    {
        sum+=arr[i];
        if(sum==0)
        {
            maxLen=i+1;
        }
        else 
        {
            if(mp.find(sum)!=mp.end())
            {
                maxLen=max(maxLen, i-mp[sum]);
            }
            else 
            {
                mp[sum]=i;
            }
        }
    }
    return maxLen;
}

int main() {
    int arr[]={15, -2, 2, -8, 1, 7, 10, 23};
    cout<<subarr(arr, 8);
}