#include<iostream>
#include<vector>
using namespace std;


int leader(int arr[], int n) {
    vector<int>ans;
    int led=arr[n-1];
    ans.push_back(arr[n-1]);
    for(int i=n-2; i>=0; i--) {
        if(arr[i]>led) {
            led=arr[i];
            ans.push_back(led);
        }
    }
    for(int i=ans.size()-1; i>=0; i--) {
        cout<<ans[i]<<" ";
    }
}




int main() {
    int arr[]={1, 2, 5, 3, 1, 2};
    leader(arr,6);
    
}