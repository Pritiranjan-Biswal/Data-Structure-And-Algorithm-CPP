//Print each character with its index

#include<iostream>
using namespace std;

void count_each(string str) {
    int n=str.length();
    for(int i=0; i<n; i++) {
        cout<<i<<" ->"<<str[i]<<endl;
    }
}








int main() {
    string str="kuna";
    count_each(str);

}