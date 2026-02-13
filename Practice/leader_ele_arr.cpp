#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void leader_arr(int arr[], int n) {
    
    vector<int>ans;
    int leader=arr[n-1];
    ans.push_back(leader);
    
    for(int i=n-2; i>=0; i--) {
        if(arr[i]>leader) {
            ans.push_back(arr[i]);
            leader=arr[i];
        }

    }
    reverse(ans.begin(), ans.end());
    for(int x:ans) {
        cout<<x<<" ";
    }
}





int main() {
    int arr[]={10,30,221,45,89};
    leader_arr(arr,5);
    
}