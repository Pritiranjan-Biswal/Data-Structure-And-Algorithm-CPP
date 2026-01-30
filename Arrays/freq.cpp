#include<iostream>
using namespace std;

int find_freq(int arr[], int n) {
    bool found[n] = {false};
    for(int i=0; i<n; i++) {
        int count=0;
        if(found[i]) continue;
        for(int j=0; j<n; j++) {
            if (arr[i]==arr[j]) {
                count++;
                found[j] = true; 
            }
        }
        cout<<arr[i]<<":-"<<count<<endl;
    }
}






int main() {
    int arr[]={1,2,2,3,3,4,5,5,6,6,6};
    cout<<find_freq(arr,11);
}