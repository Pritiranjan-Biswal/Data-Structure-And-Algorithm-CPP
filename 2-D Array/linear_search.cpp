#include<iostream>
using namespace std;

bool lin_sr(int arr[][4],int k, int row, int col){
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            if(arr[i][j]==k) {
                return 1;
            }
        }
        
    }
    return 0;

}






int main() {
    int arr[3][4];
    int target;
    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            cin>>arr[i][j];
        }
    }
    cout<<"enter the target element you want to search: ";
    cin>>target;
    if(lin_sr(arr, target, 3, 4)) {
        cout<<"found";
    }
    else {
        cout<<"not found";
    }
}