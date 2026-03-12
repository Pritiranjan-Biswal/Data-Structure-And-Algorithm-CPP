//Find length of string without using strlen()

#include<iostream>
using namespace std;

string length_str(string str) {
    int index=0;
    int count=0;
    while(str[index] !='\0') {
        index++;
        count++;
    }
    cout<<count;
}







int main() {
    string str="kunabi";
    length_str(str);
}