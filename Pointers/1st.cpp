#include<iostream>
using namespace std;

void print(int *p) {
    cout<<*p;
}


int main() {
    int val=5;
    int *p=&val;

    print(p);

}