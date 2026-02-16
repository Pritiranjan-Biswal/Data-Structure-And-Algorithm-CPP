#include<iostream>
#include<algorithm>
using namespace std;

void long_arr(int arr[], int n) {

    int curr = 1;
    int res = 1;

    for(int i = 1; i < n; i++) {

        if( (arr[i] % 2 == 0 && arr[i-1] % 2 != 0) ||
            (arr[i] % 2 != 0 && arr[i-1] % 2 == 0) ) {

            curr++;
            res = max(res, curr);
        }
        else {
            curr = 1;
        }
    }

    cout << res;
}

int main() {
    int arr[]={5,10,20,6,3,8};
    long_arr(arr, 6);
}
