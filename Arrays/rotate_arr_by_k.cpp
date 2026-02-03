#include<iostream>
#include<vector>
using namespace std;

void left_rotate_arr(int arr[], int n, int k) {

    k = k % n;   // ⭐ important

    vector<int> ans;

    for(int i = k; i < n; i++) {
        ans.push_back(arr[i]);
    }

    for(int i = 0; i < k; i++) {
        ans.push_back(arr[i]);
    }

    cout << "The array will be: " << endl;
    for(int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
}


void right_rotate_arr(int arr[], int n, int k) {

    k = k % n;   // ⭐ important

    vector<int> ans;

    for(int i = k+1; i < n; i++) {
        ans.push_back(arr[i]);
    }

    for(int i = 0; i <= k; i++) {
        ans.push_back(arr[i]);
    }

    cout << "The array will be: " << endl;
    for(int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
}




int main() {
    int arr[] = {1,2,3,4,5,3};
    left_rotate_arr(arr, 5, 2);
    right_rotate_arr(arr,5,2);

}
