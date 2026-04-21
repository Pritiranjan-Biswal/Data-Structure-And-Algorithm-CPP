    #include <bits/stdc++.h>
    using namespace std;

    int largart(vector<int> &arr) {
        int n=arr.size();
        int m=arr[0];
        for(int i=1; i<n; i++) {
            if(arr[i]>m) {
                m=arr[i];
            } 
        }
        return m;
    }









    int main() {
        vector<int>arr={1,2,56,8,7,1};
        cout<<largart(arr);
    }