#include<bits/stdc++.h>
using namespace std;






int main() {
    int n;
    cin>>n;
    int ans=0;
    while(n>0)
    {
        int rem= n%2;
        ans=ans*10 + rem;
        n=n/2;
    }
    int final_ans=0;
    while(ans>0)
    {
        int rem= ans%10;
        final_ans=final_ans*10+rem;
        ans=ans/10;

    }
    cout<<final_ans;
}