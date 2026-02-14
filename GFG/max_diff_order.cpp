#include<iostream>
#include<algorithm>
using namespace std;

void max_order(int arr[], int n) {
    int max_diff=arr[1]-arr[0];
    int min_value=arr[0];
    for(int i=1;i<n; i++) {
        max_diff=max(max_diff, arr[i]-min_value);
        min_value=min(min_value, arr[i]);
    

    }
    cout<<max_diff;
}




int main() {
    int arr[]={2, 3, 10, 6, 4, 8, 1};
    max_order(arr, 7) ;
}