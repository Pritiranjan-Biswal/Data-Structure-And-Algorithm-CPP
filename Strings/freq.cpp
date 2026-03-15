#include<iostream>
using namespace std;


//Count frequency of each character


string freq(string str) {
    int n=str.length();
    for(int i=0; i<n; i++) {
        if(str[i]=='#') 
            continue;
        int count=1;
        for(int j=i+1; j<n; j++) {
            if(str[i]==str[j]) {
                count++;
                str[j]='#';
            }
        }
        cout<<str[i]<<"--> "<<count<<endl;
    }
     
    
}


int main() {
    string str="programming";
    freq(str);
}