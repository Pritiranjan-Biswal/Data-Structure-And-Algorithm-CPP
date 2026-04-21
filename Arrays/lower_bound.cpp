#include<bits/stdc++.h>
using namespace std;


int lower_bound(vector<int>arr, int x) {
    int n=arr.size();
    int s=0, e=n-1;
    int ans;
    while(s<=e) {
        int mid=s+(e-s)/2;
        if(arr[mid]>=x) {
            ans=mid;
            e=mid-1;
        }
        else {
            s=mid+1;
        }
    }
    return s;
}




int main() {
    vector<int>v={3,5,8,15,19};
    cout<<lower_bound(v,16 );

}