#include<iostream>
using namespace std;


void freq_arr(int arr[], int n) {

    int count = 1;

    for(int i = 1; i < n; i++) {

        if(arr[i] == arr[i-1]) {
            count++;
        } else {
            cout << arr[i-1] << " " << count << endl;
            count = 1;
        }
    }

    
}



int main() {
    int arr[]={10, 10, 10, 25, 30, 30};
    freq_arr(arr,6);
}