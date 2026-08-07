#include<bits/stdc++.h>
using namespace std;


int main()
{
    stack<int>S;
    S.push(6);
    S.push(7);
    S.pop();
    S.pop();
    // cout<<S.size()<<endl;
    // cout<<S.top()<<endl;
    cout<<S.empty();
}