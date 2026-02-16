#include<iostream>
#include<vector>
using namespace std;

void rotate_arr(int arr[], int n, int d) {
    d=d%n;
    vector<int>ans;
    for(int i=d; i<n; i++) {
        ans.push_back(arr[i]);
    }
    for(int i=0; i<d; i++) {
        ans.push_back(arr[i]);
    }
    for(int x:ans) {
        cout<<x<<" ";
    }
}










int main() {
    int arr[]={1,2,3,4,5};
    int d;
    cin>>d;
    rotate_arr(arr,5,d);
}