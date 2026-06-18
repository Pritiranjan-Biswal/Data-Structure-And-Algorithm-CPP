#include<bits/stdc++.h>
using namespace std;

vector<int>findUnionresult(vector<int>& arr1, vector<int>& arr2) {
    int i=0,j=0;
    vector<int>ans;
    while(i<arr1.size()  && j<arr2.size()) {
        if(arr1[i] <= arr2[j]) {
            if(ans.empty() || ans.back() !=  arr1[i]) {
                ans.push_back(arr1[i]);
                
            }
            i++;
        }
        else {
            if(ans.empty() || ans.back() != arr2[j]) {
                ans.push_back(arr2[j]);
                
            }
            j++;
        }
        

    }
    while(i<arr1.size()) {
                if(ans.empty() || ans.back() !=  arr1[i]) {
                    ans.push_back(arr1[i]);
                    
                }
                i++;
        }
        while(j<arr2.size()) {
            if(ans.empty() || ans.back() != arr2[j]) {
                ans.push_back(arr2[j]);
               
            }
             j++;
        }
        return ans;
}










int main() {
    int n, m;
    cin>>n>>m;
    vector<int>arr1(n), arr2(m);
    for(int i=0; i<n; i++) {
        cin>>arr1[i];
    }
    for(int i=0; i<m; i++) {
        cin>>arr2[i];
    }
    vector<int>result=findUnionresult(arr1, arr2);
    for(int x: result) {
        cout<<x<<" ";
    }
}