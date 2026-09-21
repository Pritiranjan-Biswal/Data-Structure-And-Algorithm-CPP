#include<bits/stdc++.h>
using namespace std;




int main() 
{
    int n;
    cin>>n;

    bool isPrime=true; 
    if(n<0) {
        isPrime=false;
    }

    for(int i=2; i<n; i++) {
        if(n%i==0) {
            isPrime=false;
            break;
        }
    }
    if(isPrime) {
        cout<<"Yes it is a prime number";
    }
    else {
        cout<<"No it is not a prime number";
    }

   
}