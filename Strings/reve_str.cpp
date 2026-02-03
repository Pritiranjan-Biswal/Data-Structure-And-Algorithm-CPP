#include<iostream>
using namespace std;

int cal_len(char name[]) {
    int count=0;
    for(int i=0; name[i] != '\0'; i++) {   
        count++;
        
    }
    return count;
}

void rev_str(char name[], int temp) {
    int s=0;
    int e=temp-1;
    while(s<=e) {
        swap(name[s], name[e]);
        s++;
        e--;
        
    }
}





int main() {
    char name[20];
    cout<<"enter your name: ";
    cin>>name;
    
    int temp=cal_len(name);
    rev_str(name, temp);
    cout<<"reversed arr: "<<name;


}