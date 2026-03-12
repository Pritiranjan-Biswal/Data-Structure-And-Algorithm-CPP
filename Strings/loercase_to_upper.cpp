#include <iostream>
using namespace std;

void convert(string str) {
    int n=str.length();
    string ans="";
    for(int i=0; i<n; i++) {
        if(str[i]>='a' && str[i]<='z') {
            ans+=(str[i]-'a'+'A');
            
        }
        else if(str[i]>='A' && str[i]<='Z') {
            ans+=str[i]-'A'+'a';
            
        }
    }
    cout<<ans;
}







int main()  {

    string str="kUna";
    convert(str);
}