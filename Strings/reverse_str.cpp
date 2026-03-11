#include<iostream>

using namespace std;

string  rev_str(string str) {
    string ans="";
    int n=str.length();
    for(int i=n-1; i>=0;i--) {
        ans=ans+str[i];
    }
    return ans;
}



int main() {
    string str="kuna";
    cout<<rev_str(str);
}




