#include<iostream>
using namespace std;

bool check(string str1, string str2) {
    int m=str1.length();
    int n=str2.length();


    if(m!=n)
    return false;


    int i=0;
     for(int i = 0; i < m; i++) {
        if(str1[i] != str2[i]) {
            return false;
        }
    }

    return true;
}







int main() {
    string str1="hello";
    string str2="helto";

    bool c=check(str1, str2);
    if(c) {
        cout<<"yes";
    }
    else {
        cout<<"no";
    }
}