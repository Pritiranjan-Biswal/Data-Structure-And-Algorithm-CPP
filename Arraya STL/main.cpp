#include<bits/stdc++.h>
using namespace std;

void move(int arr[], int n) {
    int i=0; 
    for(int j=0; j<n -1; j++) {
        if (arr[j] == 0) {
            swap(arr[j], arr[j+1]);
        }
        i++;
    }
     for(int i=0; i<8; i++) {
        cout<< arr[i]<<" ";
    }
}




int main() {
    int arr[]={4,5,0,1,9,0,5,0};
    move(arr,8);
   
}