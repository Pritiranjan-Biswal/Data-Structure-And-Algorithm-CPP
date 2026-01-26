#include<iostream>
using namespace std;

int binary_search(int arr[], int n, int key) {
    int start=0;
    int end=n-1;
    
    while(start<=end){
        int mid=start+(end-start)/2;
        if (arr[mid]==key) {
            return mid;
        }
        else if (arr[mid]>key) {
            end=mid-1;
        }
        else if(key>arr[mid]) {
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}

int main() {
    int arr[]={2,3,4,5,6,7,8,98};
    

    int index=binary_search(arr,117,8);
    if(index != -1) {
        cout<<"found";
    }
    else {
        cout<<"not found";
    }
}