#include<iostream>
#include<vector>
#include<climits>
using namespace std;


void leader_array(int arr[], int n) {
    vector<int>ans;
    int max_val=INT_MIN;
    for(int i=n-1; i>=0; i--) {
        if (arr[i]>max_val) {
            ans.push_back(arr[i]);
            max_val=arr[i];
        }
    }
    int s=0; 
    int e=ans.size()-1;
    

    while(s<=e) {
       swap(ans[s], ans[e]);
       s++;
       e--;
    }

    for(int x:ans) {
        cout<<x<<" ";
    }

}

int main() {
    int arr[]={12,3,4,5,6,9,2};   //12, 9,2
    leader_array(arr, 7);

}