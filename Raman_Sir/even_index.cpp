#include<iostream>
#include<vector>
using namespace std;


void cal_index(int arr[], int n) {
    vector<int>even;
    vector<int>odd;
    for(int i=0; i<n; i++) {
        if(i%2==0) {
            even.push_back(arr[i]);

        }
        else {
            odd.push_back(arr[i]);
        }
    }
    for(int x: even) {
        cout<<x<<" ";
    }

    cout<<endl;
    for(int y:odd) {
        cout<<y<<" ";
    }
}


int main() {
    int arr[]={1, 2, 3, 4, 5, 6};
    cal_index(arr, 6);
}