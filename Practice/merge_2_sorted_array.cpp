#include<iostream>
using namespace std;

void merge_sorted(int arr1[],int m,int arr2[],int n) {
    int i=m-1;
    int j=n-1;
    int k=m+n-1;

    while(i>=0 && j>=0) {
        if (arr1[i]>arr2[j]) {
            arr1[k]=arr1[i];
            k--;
            i--;
        }
        else {
            arr1[k]=arr2[j];
            k--;
            j--;
        }
    }
    while(i>=0) {
        arr1[k]=arr1[i];
        k--;
        i--;
    }
    while(j>=0) {
        arr1[k]=arr2[j];
        k--;
        j--;
    }
}


int main() {

    int arr1[]={1,3,5};
    int arr2[]={2,4,6};
    merge_sorted(arr1,3,arr2,3);
    for(int i=0; i<6; i++) {

        cout<<arr1[i]<<" ";
    }
}