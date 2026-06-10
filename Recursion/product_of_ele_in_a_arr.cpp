#include<bits/stdc++.h>
using namespace std;

int product(int arr[], int n, int ind) {

    if(ind==n-1)
    return arr[ind];
    return arr[ind]* product(arr, n, ind+1);
}






int main() {
    int arr[]={2,3,4,5};
    cout<<product(arr, 4, 0);
}