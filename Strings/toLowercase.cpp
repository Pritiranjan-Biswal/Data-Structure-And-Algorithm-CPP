#include<iostream>
using namespace std;

char toLowercase(char ch) {
    if(ch>='a' && ch<='z') {
        return ch;
    }
    else {
        char temp=ch-'A'+'a';
        return temp;
    }

}









int main() {
    
    cout<<toLowercase('b')<<endl;
    cout<<toLowercase('C');
}