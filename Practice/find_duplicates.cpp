#include<iostream>
#include<vector>
using namespace std;

int dup_arr(int arr[], int n){
    vector<int>ans;
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if (arr[i]==arr[j]) {
                ans.push_back(arr[i]);
                break;
            }
        }
        
    }
    for(int x: ans) {
        cout<<x<<" ";
    }
}








int main() {
    int arr[]={1,2,3,2,4,5,3};
    dup_arr(arr, 7);
    
}