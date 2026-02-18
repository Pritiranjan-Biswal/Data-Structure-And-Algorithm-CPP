#include<iostream>
using namespace std;


int count(int n) {
    if(n==0)
    return 1;

    cout<<n<<" ";
    count(n-1);
}










int main() {
    int n=5;
    count(n);
    
}