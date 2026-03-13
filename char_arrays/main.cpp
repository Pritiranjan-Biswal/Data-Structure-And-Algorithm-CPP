#include<iostream>
#include<cstring>
using namespace std;

int getLength(char arr[]) {
    int count=0;
    int index=0;
    while(arr[index] !='\0') {
        count++;
        index++;
    }
    return count;
}




// void concatArr(char a[], char b[]) {
//     int aIndex=getLength(a);
//     int bIndex=0;
//     while (b[bIndex] !='\0')  {
//         a[aIndex]=b[bIndex];
//         aIndex++;
//         bIndex++;
//     }
//     a[aIndex]='\0';
// }

// void copyArr(char actArr[], char cpyArr[]) {
//     int aIndex=0;
//     int bIndex=0;

//     while(actArr[aIndex] !='\0') {
//         cpyArr[bIndex]=actArr[aIndex];
//         bIndex++;
//         aIndex++;
//     }
//     cpyArr[bIndex]='\0';
// }

// bool compArr(char a[], char b[]) {
//     int aIndex=0;
//     int bIndex=0;
//     int aLength=getLength(a);
//     while(aIndex<=aLength) {
//         if(a[aIndex] != b[bIndex]) {
//             return false;
//         }
//         else {
//             aIndex++;
//             bIndex++;

//         }
//     }
//     return true;


// }




int main() {
    // char arr[10]="kuna";
    // cout<<getLength(arr);

    // char a[50]="kuna";
    // char b[50]="biswal";
    // concatArr(a,b);
    // cout<<a;

    // char actArr[100]="kunabiswal";
    // char cpyArr[100];
    // copyArr(actArr, cpyArr);
    // cout<<cpyArr;
    char actual[]="kuna";
    char ans[100];
    strcpy(ans, actual);
    // cout<<ans;
    // int n= strlen(actual);
    // cout<<n;
    if(strcmp(actual, ans) ==1) {
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}

