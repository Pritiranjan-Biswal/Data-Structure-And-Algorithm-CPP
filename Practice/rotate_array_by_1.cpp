// #include<iostream>
// #include<vector>
// using namespace std;

// void rotate_arr(int arr[], int n) {
//     int first = arr[0];

//     for(int i = 1; i < n; i++) {
//         arr[i-1] = arr[i];
//     }

//     arr[n-1] = first;
// }






// int main() {
//     int arr[]={1,2,3,4,5};
//     rotate_arr(arr,5);
//     for(int i = 0; i < 5; i++) {
//     cout << arr[i] << " ";
// }

    
// }


#include<iostream>
#include<vector>
using namespace std;

void rotate_arr(int arr[], int n) {
    int last=arr[n-1];
    for(int i=n-1; i>0; i--) {
        arr[i]=arr[i-1];
    }
    arr[0]=last;
}


int main() {
    int arr[]={1,2,3,4,5};
    rotate_arr(arr,5);
    for(int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
}

    
}