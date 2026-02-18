#include<iostream>
using namespace std;

// bool maj_ele(int arr[], int n) {
//     for(int i=0; i<n; i++) {
//         int count=0;
//         for(int j=0; j<n; j++) {
//             if(arr[i]==arr[j]) {
//                 count++;
//             }
//         }
//         if(count>n/2)
//         return 1;
//     }
//     return 0;
// }

bool maj_ele(int arr[], int n) {
    int count=0;
    for(int i=1; i<n; i++) {
        if(arr[i-1] == arr[i]) {
            count++;

        }
        else {
            count--;
        }
        
    }
    if(count<=n/2) 
    return 0;
}








int main() {
    int arr[]={8,3,4,8,8};
    bool m=maj_ele(arr, 5);
    if(m) {
        cout<<"true";
    }
    else {
        cout<<"false";
    }
}