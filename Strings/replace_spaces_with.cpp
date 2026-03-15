#include<iostream>
using namespace std;

void replace(string str)  {
    int n=str.length();
    for(int i=0; i<n; i++) {
        if(str[i]==' ') {
            str[i]='_';
        }
    }
    cout<<str;
}




int main() {
    string str=" I Love  C++ ";
    replace(str);
}