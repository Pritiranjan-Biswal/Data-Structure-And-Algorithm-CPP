#include<iostream>
using namespace std;

void count_str(string str) {
    int vowel=0;
    int cons=0;
    int n=str.length();
    for(int i=0; i<n; i++) {
        if((str[i]== 'a') || str[i]=='e' || str[i]== 'i' || str[i]=='o'|| str[i]=='u' ||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U') {
            vowel++;
        }
        else if (str[i] >='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z'){
            cons++;
        }
    }
    cout<<vowel<<endl;
    cout<<cons;
}




int main() {
    string str="apple";
    count_str(str);
}