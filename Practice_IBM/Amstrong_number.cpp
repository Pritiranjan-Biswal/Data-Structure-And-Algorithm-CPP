#include<bits/stdc++.h>
using namespace std;



int main() {
    int n;
    cin>>n;
    int m=n;
    int sum=0;
    while(m>0) {
        int rem= m%10;
        sum= sum+(rem*rem*rem);
        m=m/10;
    }
    if(n==sum) {
        cout<<"Yes";
    }
    else {
        cout<<"false";
    }
}