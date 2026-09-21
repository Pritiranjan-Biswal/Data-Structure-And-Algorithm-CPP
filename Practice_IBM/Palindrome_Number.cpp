#include<bits/stdc++.h>
using namespace std;



int main() {
    int n;
    cin>>n;
    int m= n;

    int ans=0;
    while(m>0) {
        int rem= m%10;
        ans=ans*10+rem;
        m=m/10;
    }
    if(n==ans) {
        cout<<"Yes";
    }
    else {
        cout<<"No";
    }
}