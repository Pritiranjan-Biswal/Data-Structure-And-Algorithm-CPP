#include<iostream>
using namespace std;




int main() {
    int arr[3][4]={{1 ,2, 3, 14}, {5, 6, 7, 18}, {9, 1, 1, 12}};
    // for(int i=0; i<4; i++) {
    //     for(int j=0; j<3; j++) {
    //         cin>>arr[j][i];
    //     }
    // }
    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}