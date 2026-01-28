#include<iostream>
using namespace std;

int first_occ(int arr[], int n, int key) {
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e) {
        int mid=s+(e-s)/2;
        if (arr[mid]==key) {
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]> key)  {
            e=mid-1;
        }
        else if(key>arr[mid]) {
            s=mid+1;
        }

    }
    return ans;
}


int last_occ(int arr[], int n, int key) {
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e) {
        int mid=s+(e-s)/2;
        if (arr[mid]==key) {
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]>key) {
            e=mid-1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
    }
    return ans;

}




 



int main() {

    int arr[]={1,2,2,2,3,3,4};
    cout<<"the first occurance in the sorted array  of the element is :"<<first_occ(arr, 7, 2)<<endl;
    cout<<"the last occurance in the sorted array  of the element is :"<<last_occ(arr, 7, 2);
}