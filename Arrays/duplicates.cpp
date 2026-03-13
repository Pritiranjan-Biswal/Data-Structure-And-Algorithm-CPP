#include <iostream>
#include <unordered_set>
using namespace std;

bool dupli_arr(int arr[], int n) {
    unordered_set<int> seen;

    for(int i = 0; i < n; i++) {
        if(seen.find(arr[i]) != seen.end()) {
            return true;  // duplicate found
        }
        seen.insert(arr[i]);
    }

    return false;  // no duplicates
}

int main() {
    int arr[] = {4, 1, 7, 3, 1, 9};
    bool ans = dupli_arr(arr, 6);

    if(ans) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}