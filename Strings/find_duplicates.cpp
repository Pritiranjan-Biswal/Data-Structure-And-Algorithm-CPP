#include<iostream>
using namespace std;

char dupl(string str) {
    int n=str.length();
    for(int i=0; i<n; i++) {
        int count=0;
        for(int j=i+1; j<n; j++) {
            if(str[i]== str[j]) {
                count++;
            }
        }
        if(count>0) {
            cout<< str[i]<<endl;;
        }
    }
    
}











int main() {
    string str="helloo";
    dupl(str);
}