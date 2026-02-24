// #include<iostream>
// using namespace std;


// int factorial(int n) {
//     if(n==0) {
//         return 1;

//     }
    

//     return n*factorial(n-1);

// }


// int main() {
//     int n;
//     cin>>n;
//     int ans=factorial(n);
//     cout<<ans;
// }


 
#include<iostream>
using namespace std;

void reachHome(int src, int dest) {
    if (src==dest) {
        cout<<" done"<<endl;
        return ;
    }
    src++;
    reachHome(src, dest);
}
int main() {
    int dest=10;
    int src=1;

    cout<<endl;

    reachHome(src, dest);
}



 














