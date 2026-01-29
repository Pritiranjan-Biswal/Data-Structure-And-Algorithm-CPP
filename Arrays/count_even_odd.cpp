//Count even and odd elements


#include<iostream>
using namespace std;

int count_even_odd(int arr[], int n) {
    int even=0;
    int odd=0;
    for(int i=0; i<n; i++) {
        if (arr[i]%2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }
    cout<<"even: "<<even<<endl;
    
    cout<<"odd: "<<odd<<endl;

}




int main() {
    int arr[]={1, 3, 5, 4, 8};
    count_even_odd(arr, 5);
}