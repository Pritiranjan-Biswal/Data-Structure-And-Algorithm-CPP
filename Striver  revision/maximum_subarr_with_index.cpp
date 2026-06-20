#include<bits/stdc++.h>

using namespace std;


void  calculate(vector<int>arr) 
{
    int n= arr.size();
    int sum=0;
    int maximum=  INT_MIN;
    int s=0,e=0,ansStart=0;
    
    for(int i=0; i<n; i++) {
        
        sum+=arr[i];
        if(sum>maximum) {
            maximum=sum;
             ansStart=s;
            e=i;
           
        }
        else if(sum<0) {
             sum=0;
            s=i+1;
           
            
        }
    }
    cout<<ansStart;
    cout<<e;
}


int main() {
    vector<int>arr={-2,1,-3,4,-1,2,1,-1,4};
    calculate(arr);
}

