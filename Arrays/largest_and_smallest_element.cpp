#include<iostream>
using namespace std;

int get_lar(int arr[], int n){
    int ans=0;
    for(int i=1; i<n; i++) {
        if (arr[i]>arr[ans]) {
            ans=i;
        }
    }
    return ans;

}

int get_small(int arr[], int n) {
    int ans=0;
    for (int i=1; i<n; i++) {
        if (arr[i]<arr[ans]){
            ans=i;
        }
    }
    return ans;
}


int main() {


    int arr[]={3,50,6,0,900,10};
    cout<<"the largest element is at index: "<<get_lar(arr,6)<<endl;
    cout<<"the smallest element is at index: "<<get_small(arr,6);

}