#include <iostream>
#include <vector>
using namespace std;

void separate(int arr[], int n) {
    vector<int> even, odd;

    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            even.push_back(arr[i]);
        else
            odd.push_back(arr[i]);
    }

    cout << "Even: ";
    for(int x : even) cout << x << " ";

    cout << "\nOdd: ";
    for(int x : odd) cout << x << " ";
}

int main() {
    int arr[] = {54, 43, 2, 5, 14, 17, 18, 19};
    separate(arr, 8);
}
