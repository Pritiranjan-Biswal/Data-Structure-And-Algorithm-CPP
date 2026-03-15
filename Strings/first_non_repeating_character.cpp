#include<iostream>
using namespace std;


char first_non(string str) {
    int n=str.length();
    for(int i=0; i<n; i++) {
        int count=0;
        for(int j=0; j<n; j++) {
            
            if(str[i] == str[j]) {
                count++;
            }
        }
        if(count==1)  {
            return str[i];
        }
        
    }
    return '#';
}








int main() {
    string str="aabbccdeff";
    cout<<first_non(str);

}