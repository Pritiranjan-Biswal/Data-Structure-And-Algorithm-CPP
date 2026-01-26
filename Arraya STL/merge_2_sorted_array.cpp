#include<iostream>
using namespace std;

void merge(int arr1[], int m, int arr2[], int n, int arr3[]) {
    int i=0,j=0;
    int k=0;
    while(i<m && j<n) {
        if(arr1[i]<arr2[j]) {
            arr3[k++]=arr1[i++];
        }
        else {
            arr3[k++]=arr2[j++];
        }
    }
    while(i<m) {
        arr3[k++]=arr1[i++];
    }
    while(j<n) {
        arr3[k++]=arr2[j++];
    }
}



void print(int arr3[], int n) {
    for(int i=0; i<n; i++) {
        cout<<arr3[i]<<" 0";
    }
}


int main() {
    int arr1[]={1, 3, 5, 7,9,11};
    int arr2[]={2, 4, 6, 8};
    int arr3[10]={};
    merge(arr1, 6, arr2, 4, arr3);
    print(arr3, 10);



}