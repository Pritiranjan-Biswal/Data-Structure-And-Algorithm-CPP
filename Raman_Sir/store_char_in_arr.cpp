#include<iostream>
using namespace std;

int main() {
    string str="hello";
    int n=str.size();
    char arr[n];
    for(int i=0; i<n; i++) {
        arr[i]=str[i];
    }

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }


}