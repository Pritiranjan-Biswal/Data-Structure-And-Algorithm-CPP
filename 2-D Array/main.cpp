#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int>rev_arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int i=0, j=n-1;
    while(j>=0 && i<n) {
        rev_arr[i]=arr[j];
        j--;
        i++;
    }
    for(int i=0; i<n; i++) {
        cout<<rev_arr[i]<<" ";
    }   
}