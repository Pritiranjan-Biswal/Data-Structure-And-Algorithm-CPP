#include<iostream>
using namespace std;

string remove(string str, char ch) {
    string s="";
    for(int i=0; i<str.length(); i++) {
        if(str[i]!= ch) {
            s+=str[i];
        }
    }
    return s;
}








int main() {
    string str="programming";
    char ch='m';
    cout<<remove(str,ch);
}