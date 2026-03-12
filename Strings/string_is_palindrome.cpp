#include<iostream>
using namespace std;

// bool palindrome_str(string str) {
//     int n=str.length();
//     string ans="";
//     for(int i=n-1; i>=0; i--) {
//         ans=ans+str[i];
//     }
//     if(str== ans) {
//         return true;
//     }
//     else {
//         return false;
//     }
// }

// int main() {
//     string str="kunanuk";
//     bool s=palindrome_str(str);
//     if(s) {
//         cout<<"yes";
//     }
//     else {
//         cout<<"no";
//     }
// }


bool palindrome_str(string str) {
    int n=str.length();
    int start=0;
    int end=n-1;
    while(start<end) {
        if(str[start]==str[end]) {
            start++;
            end--;
        }
        else {
            return false;
        }
    }
    return true;
}










int main() {
    string str="kunanuk";
    bool ans=palindrome_str(str);
    if(ans) {
        cout<<"yes";
    }
    else {
        cout<<"no";
    }
}