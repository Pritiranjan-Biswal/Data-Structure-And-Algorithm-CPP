#include<iostream>
using namespace std;

void  move_zero(int arr[], int n) {
    int non_zero=0;
    for(int j=0; j<n; j++) {
        if(arr[j]!=0) {
            swap(arr[j], arr[non_zero]);
            non_zero++;
        }
    }
}



int main() {

    int arr[]={1,0,2,3,0,2,9,0,0};

    move_zero(arr, 9);
    for(int i=0; i<9; i++) {
        cout<<arr[i]<<" ";
    }


}


