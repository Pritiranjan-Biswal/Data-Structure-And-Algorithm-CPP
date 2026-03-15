#include<iostream>
using namespace std;


string remove_vowel(string str) {
    int n=str.length();
    string s="";
    for(int i=0; i<n; i++) {
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!='A' &&str[i]!='E' &&str[i]!='I' &&str[i]!='O' &&str[i]!='U') {
            s+=str[i];
        }
    }
    return s;
}




int main() {
    string str="Hello World";
    cout<<remove_vowel(str);
}