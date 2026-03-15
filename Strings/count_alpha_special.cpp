#include<iostream>
using namespace std;

void count(string str) {
    int n=str.length();
    int alpha=0;
    int digit=0;
    int special=0;
    // for(int i=0; i<n; i++) {
    //     if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z') {
    //         alpha++;
    //     }
    //     else if(str[i]>='0' && str[i]<='9') {
    //         digit++;
    //     }
    //     else {
    //         special++;
    //     }
    // }
    for(int i=0; i<n; i++) {
        if(isalpha(str[i])) {
            alpha++;
        }
        else if(isdigit(str[i])) {
            digit++;
        }
        else {
            special++;
        }
    }

    cout<<"alphabate :- "<<alpha<<endl;
    cout<<"Digit :- "<<digit<<endl;
    cout<<"SPecial Character :- "<<special<<endl;
}

int main() {
    string str="A B@12";
    count(str);

}