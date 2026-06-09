#include<bits/stdc++.h>
using namespace std;

bool recursion(int n, int i) {
    if(n<=1)
    return false;
    if(n==i)
    return true;


    if(n%i==0)
    return false;

    return recursion(n, i+1);
}



int main() {
    int n;
    cin>>n;
    bool out=recursion(n, 2);
    if(out) {
        cout<<"Prime"<<endl;
    }
    else {
        cout<<"Not a prime";
    }
}