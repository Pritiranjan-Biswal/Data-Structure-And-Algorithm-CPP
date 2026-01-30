#include<iostream>
using namespace std;

int sum_arr(int arr[], int n) {
    int sum=0;
    for(int i=0; i<n; i++) {
        sum=sum+arr[i];
    }
    return sum;
}





int main() {
    int arr[] ={1,2,3,4,5};
    
    cout<<"the sum of the array is :"<<sum_arr(arr,5 );

}