#include<bits/stdc++.h>
using namespace std;

void table(int i, int n) {
    if(n>10)
    return;

    cout<<i<< "*"<<n<<"="<<i*n<<endl;
    table(i, n+1);
}







int main() {
    int i;
    cin>>i;
    table(i, 1);
}