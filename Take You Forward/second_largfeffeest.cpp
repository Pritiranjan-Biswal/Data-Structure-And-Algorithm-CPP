#include<bits/stdc++.h>
using namespace std;

int sec_lar(vector<int> &arr) {
    int n=arr.size();
    int largest=arr[0];
    int second_largest=INT_MIN;
    for(int i=1; i<n; i++) {
        if(arr[i]>largest) {
            second_largest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>second_largest) {
            second_largest=arr[i];
        }
    }
    return second_largest;
}






int main() {
    vector<int>arr={1,2,3,11,2,3,5,};
    cout<<sec_lar(arr);
}