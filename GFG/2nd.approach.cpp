#include<iostream>
#include<algorithm>
using namespace std;

void rotate_arr(int arr[], int n, int d) {
    d = d % n;

    reverse(arr, arr + d);
    reverse(arr + d, arr + n);
    reverse(arr, arr + n);

    // Print here
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {1,2,3,4,5};
    int d=2;
    // cin >> d;

    rotate_arr(arr,5,d);
}
