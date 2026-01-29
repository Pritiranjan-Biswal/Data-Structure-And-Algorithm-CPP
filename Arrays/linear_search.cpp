#include<iostream>
using namespace std;

bool linear_search(int arr[], int n, int key) {
    for(int i=0; i<n; i++) {
        if(arr[i]==key) {
            return 1;
        }
        
    }
    return 0;
    
}











int main() {

    int arr[]={3,4,5,6,7,8,9};
    bool l=linear_search(arr, 7, 16);
    if(l) {
        cout<<"element is found";
    }
    else {
        cout<<"element is not found";
    }

}