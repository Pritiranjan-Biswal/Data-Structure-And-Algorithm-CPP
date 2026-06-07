#include<bits/stdc++.h>
using namespace std;
void print10ton(int n) {
    if(n<=10)
    return;
    print10ton(n-1);
    cout<<n<<endl;
}



int main() {
    int n;
    cin>>n;
    print10ton(n);
}