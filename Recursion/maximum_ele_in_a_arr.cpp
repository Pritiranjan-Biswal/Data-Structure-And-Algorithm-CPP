//Find the Maximum element in a given array of size N

#include<bits/stdc++.h>
using namespace std;

int maximum(int arr[], int n, int ind) {
    if(ind==n-1)
    return (arr[ind]);
    return max(arr[ind], maximum(arr, n, ind+1));
}




int main() {
    int arr[]={2,3,55,2,1,12};
    cout<<maximum(arr, 6, 0);
}