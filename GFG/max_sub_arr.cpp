#include<iostream>
using namespace std;

void maxSub_sum(int arr[], int n) {
    int sub_sum=arr[0];
    int res=arr[0];
    for(int i=1; i<n; i++) {
        sub_sum=max(arr[i],sub_sum+arr[i]);
        res=max(sub_sum, arr[i]);
    }
    cout<<res;
}

int main() {
    int arr[]={1,-2,3,-1,2};
    maxSub_sum(arr,5);

}