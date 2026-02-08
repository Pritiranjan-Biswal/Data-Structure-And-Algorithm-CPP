#include<iostream>
using namespace std;


void avg(int arr[], int n) {
    int sum=0;
    int count=0;
    for(int i=0; i<n; i++) {
        if(arr[i]>0) {
            count++;
            sum=sum+arr[i];

        }
    }
    cout<<"average ="<<sum/count;
}









int main() {
    int arr[]={-12, 8, -7, 6, 12, -9, 14};
    avg(arr,7);
}