#include<iostream>
using namespace std;

int kadane_algo(int arr[], int n) {
    int curr_sum=arr[0];
    int max_sum=arr[0];
    for(int i=1; i<n; i++) {
        curr_sum=max(arr[i], curr_sum+arr[i]);
        max_sum=max(curr_sum,max_sum);
    }
    return max_sum;
}













int main() {
    int arr[]={2, -1, 3};
    cout<<kadane_algo(arr, 3);
}

