#include<iostream>
using namespace std;

int equilibriumIndex(int arr[], int n) {

    int totalSum = 0;
    for(int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    int leftSum = 0;

    for(int i = 0; i < n; i++) {

        int rightSum = totalSum - leftSum - arr[i];

        if(leftSum == rightSum) {
            return i;
        }

        leftSum += arr[i];
    }

    return -1;
}

int main() {
    int arr[] = {5,-2,2,5};
    cout << equilibriumIndex(arr, 5);
}