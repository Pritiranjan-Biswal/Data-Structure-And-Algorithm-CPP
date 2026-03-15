#include<iostream>
using namespace std;

string reverse_the_word(string str) {
    int s=0;
    int e=str.length()-1;
    while(s<=e) {
        swap(str[s], str[e]);
        s++;
        e--;

    }
    return str;
}





int main() {
    string str="I love coding";
    cout<<reverse_the_word(str);
}