#include<bits/stdc++.h>
using namespace std;

void printnto(int n) {
    if(n == 0)
    return;

    if(n%2 != 0) {
        cout<<n<<endl;
    }
    printnto(n-1);
}





int main() {
    int n;
    cin>>n;
    printnto(n);
}




