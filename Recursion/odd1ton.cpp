#include<bits/stdc++.h>
using namespace std;

void printOddno(int n) {
    if(n==0)
    return;
    printOddno(n-1);
    if(n%2 !=0) {
        cout<<n<<endl;
    }
    
}



int main()  {
    int n;
    cin>>n;
    printOddno(n);
}