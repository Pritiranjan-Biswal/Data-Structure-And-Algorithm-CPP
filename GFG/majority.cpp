#include<iostream>
using namespace std;


int maj_ele(int arr[], int n) {
    int maj=arr[0];
    int count=1;
    for(int i=1; i<n ;i++) {
        if(maj==arr[i]) {
            count++;
        }
        

    }
    if(count>n/2) {
        return count;
    }
    else {
        return -1;
    }

}
1

















int main() {
    int arr[]={8, 3, 4, 8, 8};
    int ans=maj_ele(arr,5);
    cout<<ans;
}