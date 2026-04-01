#include<iostream>
#include<climits>
using namespace std;


void kadane_algo(int arr[], int n) {
    int sum=0;
    int maximum=INT_MIN;
    int start=-1;
    int tempStart=-1;
    int end=-1;
    for(int i=0; i<n; i++) {
        if(sum==0){
            start=i;
        }
        sum+=arr[i];

        if(sum>maximum){
            maximum=sum;
            
             end=i;
        }
       
        if(sum<0)
        sum=0;
    }
    cout<<start<<endl;
    cout<<end<<endl;
    cout<<maximum;
}

int main() {
    int arr[]={5,4,-1,7,8};
    kadane_algo(arr, 5);
}