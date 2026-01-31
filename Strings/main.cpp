// #include<iostream>
// using namespace std;

// int getLength(char name[]) {
//     int count=0;
//     for(int i=0; name[i] != '\0'; i++) {
//         count++;
//     }
//     return count;
// }



// int main() {
//     char ch[]="kunabiswal";
//     cout<<getLength(ch);
//     return 0;
// }



//kuna => anuk



// #include<iostream>
// using namespace std;



// void rev_str(char name[], int n) {
//     int s=0;
//     int e =n-1;
//     while(s<e) {
//         swap(name[s], name[e]);
//         s++;
//         e--;
 
//        }
//   }

// bool palindrome(char a[], int n) {
//     int s=0;
//     int e=n-1;
//     while(s<e) {
//         if(a[s] != a[e]) {
//             return 0;
//         }
//         else {
//             s++;
//             e--;
//         }
//         return 1;
//     }
    
// }




// int main() {
//     char ch[]="kuuk";
    
//     cout<<palindrome(ch, 4);
// }


#include<iostream>
using namespace std;



int main() {
    char name[100];
    cout<<"enter a character: ";
    cin>>name;

    cout<<"the character you have entered: "<<name;
}