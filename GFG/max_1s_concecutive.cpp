#include<iostream>
using namespace std;

void con(int arr[], int n) {
    int count=0;
    int max_count=0;
    for(int i=0; i<n; i++) {    

        if(arr[i]==1) {
            count++;
        }
        else {
            count=0;
        }
        max_count=max(max_count,count);

    }
    cout<<max_count;
}










int main() {
    int arr[] ={1,1,0,1,1,1,1,1,0,1,0,0};
    con(arr,12);
}