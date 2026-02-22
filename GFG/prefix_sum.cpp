#include<iostream>
#include<vector>
using namespace std;

// void prefix_sum(int arr[], int n) {
//     int sum=0;
//     vector<int>ans;
//     for(int i=0; i<n; i++) {
//         sum=sum+arr[i];
//         ans.push_back(sum);
//     }
//     for(int x: ans) {
//         cout<<x<<" ";
//     }
// }

void prefix_sum(int arr[], int n) {
    int sum=0;
    for(int i=0; i<n; i++) {
        sum=sum+arr[i];
        arr[i]=sum;
    }
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

}

int main() {
    int arr[]={1,2,3,4,5};
    prefix_sum(arr,5);
}