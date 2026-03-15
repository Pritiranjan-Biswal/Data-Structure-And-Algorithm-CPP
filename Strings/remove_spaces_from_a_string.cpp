#include<iostream>
using namespace std;

void remove_space(string str) {
    int n=str.length();
    int i=0;
    for(int j=0; j<n; j++) {
        if(str[j]!=' ') {
            str[i]=str[j];
            i++;
        }
    }
    
    str.resize(i);
    cout<<str;
}









int main() {
    string str="My Name Is Pritiranjan Biswal";
    remove_space(str);
}