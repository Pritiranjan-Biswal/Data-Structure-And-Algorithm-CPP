//Check if array is sorted


#include<iostream>
using namespace std;


bool sorted(int arr[], int n) {
    int ans=-1;
    for(int i=0; i<n-1; i++) {
        if(arr[i]>arr[i+1]) {
            return false;
        }
    }
    return true;
}




int main() {


    int arr[]={1,2,3,4,5,6,31};
    bool s=sorted(arr, 7);
    if(s) {
        cout<<"sorted";
    }
    else {
        cout<<"not sorted";
    }


}