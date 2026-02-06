#include<iostream>
using namespace std;

bool check_array(int arr1[], int m, int arr2[], int n) {
    if(m != n)
    return 0;
    int i=m-1;
    int j=n-1;
    while(i>=0 && j>=0) {
        if(arr1[i] != arr2[j])  {
            
            return 0;
            
        }
        i--;
        j--;
    }
    return 1;

}
int main() {
    int arr1[]={1,2,3};
    int arr2[]={1,2,3};
    int k=check_array(arr1,3,arr2,3);
    if(k) {
        cout<<"yes";
    }
    else {
        cout<<"no";
    }

}