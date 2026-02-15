#include<iostream>
using namespace std;

void stock(int arr[], int n) {
    int profit=0;
    for(int i=1; i<n; i++) {
        if(arr[i]>arr[i-1]) {
            profit=profit+(arr[i]-arr[i-1]);
        }
    }
    cout<<"profit= "<<profit;
}
int main() {
    int arr[]={30,20,10};
    stock(arr, 3);

}