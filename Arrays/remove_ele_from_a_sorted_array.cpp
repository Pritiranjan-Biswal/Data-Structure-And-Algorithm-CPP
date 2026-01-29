#include<iostream>
#include<vector>
using namespace std;
vector<int>remove_el(int arr[], int n){
    vector<int>ans;
    for(int i=0; i<n-1; i++) {
        if(arr[i] != arr[i+1]) {
            ans.push_back(arr[i]);
        }
        
    }
    ans.push_back(arr[n-1]);
    return ans;

}











int main() {
    int arr[]={1,2,2,3,4,5};
    vector<int>res=remove_el(arr, 6);
    for(int x:res) {
        cout<<x<<" ";
    }
}