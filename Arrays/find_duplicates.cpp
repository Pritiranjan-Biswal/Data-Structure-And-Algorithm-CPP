#include<iostream>
using namespace std;

int ans=0;
int find_dupl(int arr[], int n) {
    for(int i=0;i<n;i++) {
        ans=ans^arr[i];
    }
    for(int i=1;i<n;i++) {
        ans=ans^i;
    }
    return ans;
}




int main() {
    int arr[]={1,1,2,3,4};
    int dupl= find_dupl(arr, 5);
    cout<<"find duplicates are: "<<dupl<<endl;
}

//It is only valid for if their is only on duplicate present.