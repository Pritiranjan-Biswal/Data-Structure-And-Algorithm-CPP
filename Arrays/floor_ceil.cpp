    #include<bits/stdc++.h>
    using namespace std;

    vector<int> floor_ceil(vector<int>arr, int x) {
        int n=arr.size();
        int start=0;
        int end=n-1;
        int floor=-1;
        int ceil=-1;
        while(start<=end) {
            int mid=start+(end-start)/2;
            if(arr[mid]<=x) {
                floor=arr[mid];
                start=mid+1;
            }
            else {
                end=mid-1;
            }
        }
         start=0;
         end=n-1;
        while(start<=end) {
            int mid=start+(end-start)/2;
            if(arr[mid]>=x) {
                ceil=arr[mid];
                end=mid-1;
            }
            else {
                start=mid+1;
            }
        }
        return {floor, ceil};


    }










    int main(){
        vector<int>v={2, 4, 6, 8, 10, 12, 14};
        vector<int>ans=floor_ceil(v, 8);
        cout<<ans[0]<<" "<<ans[1];
    }