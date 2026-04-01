#include<iostream>
using namespace std;


void  lar(int arr[], int n) {
    int largest=-1;
    int second_largest=-1;
    for(int i=0; i<n; i++) {
        if(arr[i]>largest) {
            second_largest=largest;
            largest=arr[i];
        }
        else if(arr[i]>second_largest && arr[i]!=0) {
            second_largest=arr[i];

        }
    }
    cout<<second_largest<<endl;
    cout<<largest;
}










int main() {
    int arr[]={5,2,0,8};
    lar(arr,4);
}