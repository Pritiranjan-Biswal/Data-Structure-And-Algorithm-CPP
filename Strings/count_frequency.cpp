    #include<iostream>
    using namespace std;


    void frequency(string str, char ch) {
        int count=0;
        int n=str.length();
        for(int i=0; i<n; i++) {
            if(str[i]==ch) {
                count++;
            }
        }
        cout<<count;
    }








    int main() {
        string str="pritiranjan";
        char ch='q';
        frequency(str, ch);
    }