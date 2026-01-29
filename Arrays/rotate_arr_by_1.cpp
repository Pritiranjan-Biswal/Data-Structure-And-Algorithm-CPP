#include<iostream>
#include<vector>
using namespace std;

vector<int> left_rotation(int arr[], int n) {
    vector<int>ans;
    for(int i=1; i<n; i++) {
        ans.push_back(arr[i]);
    }
    ans.push_back(arr[0]);
    return ans;


}

vector<int> right_rotation(int arr[], int n) {
    vector<int>ans;
    ans.push_back(arr[n-1]);
    for(int i=0; i<n-1; i++) {                //1 2 3 4  5 6
        ans.push_back(arr[i]);                 //6 1 2 3 4 5
    }
    
    return ans;


}






int main() {
    int arr[]={1,2,3,4,5,6};
    vector<int>res=left_rotation( arr, 6);
    for(int x: res) {
        cout << x << " " ;

    }
    cout<<endl;
    
    vector<int>result=right_rotation( arr, 6);
    for(int x: result) {
        cout<<x<<" ";
    }
}