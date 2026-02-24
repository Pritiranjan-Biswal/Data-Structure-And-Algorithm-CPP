#include<iostream>
#include<climits>
using namespace std;

void second_largest(int arr[], int n){
    int largest=INT_MIN;
    int second_largest=INT_MIN;
    for(int i=0; i<n; i++) {
        if(arr[i]>largest) {
            second_largest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && second_largest) {
            second_largest=arr[i];
        }
    }
    if(second_largest== INT_MIN) {
        cout<<"no";
    }else {
        cout<<second_largest;
    }
    
}







int main() {
    int arr[]={-5, -2, -8, -1};
    second_largest(arr,4);
}