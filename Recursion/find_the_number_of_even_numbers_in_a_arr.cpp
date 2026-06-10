#include<bits/stdc++.h>
using namespace std;

int even(int arr[], int n, int ind){
   
    if(ind == n)
    return 0;
    if(arr[ind] %2 ==0) 
         return 1+even(arr, n, ind+1);

    return even(arr, n, ind+1);
}



int main() {
    int arr[]={1,2,3,4,5,6};
    cout<<even(arr,6,0);
}