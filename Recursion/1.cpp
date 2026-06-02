#include<bits/stdc++.h>
using namespace std;

void printCoderarmy(int n) {
    if(n == 0)
    return;

    cout<<"Coder Army"<<endl;

    printCoderarmy(n-1);
}







int main() {
    printCoderarmy(10);
}