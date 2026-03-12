#include<iostream>
using namespace std;

void count_words(string str) {
    int count=0;
    int n=str.length();
    for(int i=0; i<n; i++) {
        if(str[i] !=' ' && (i==0 || str[i-1]==' ')) {
            count++;
        }
    }
cout<<count;










}








int main() {
    string str=" MY NAME IS PRITIRANJAN BISWAL";
    count_words(str);
}