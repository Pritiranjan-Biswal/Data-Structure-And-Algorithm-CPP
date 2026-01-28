#include<iostream>
using namespace std;

int get_lar(int arr[], int n){
    int ans=0;
    for(int i=1; i<n; i++) {
        if (arr[i]>arr[i-1]) {
            ans=i;
        }
    }
    return ans;

}



int main() {


    int arr[]={3,5,6,80,9,10};
    cout<<get_lar(arr,6);

}