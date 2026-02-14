#include<iostream>
#include<algorithm>
using namespace std;

void mean_arr(int arr[], int n)  {
    int sum=0;
    for(int i=0; i<n; i++) {
        sum=sum+arr[i];
    }
    int mean=sum/n;
    cout<<mean<<endl;
}

void median_arr(int arr[], int n) {
    sort(arr, arr+n);
    if(n%2 !=0) {
        cout<<arr[n/2];
    }
    else {
        cout<<(arr[n/2]+arr[n/2-1])/2;
    }
}












int main() {
    int arr[]={1,2,19,28,5};
    mean_arr(arr, 5);
    median_arr(arr, 5);
}