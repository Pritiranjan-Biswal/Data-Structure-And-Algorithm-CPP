#include<iostream>
using namespace std;

// -------- INTERSECTION --------
int intersection_arr(int arr1[], int m, int arr2[], int n) {
    int k = 0;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(arr1[i] == arr2[j]) {
                arr1[k] = arr1[i];
                k++;
                break;   // <-- IMPORTANT (avoids duplicates)
            }
        }
    }
    return k;
}

// -------- UNION --------
void union_arr(int arr1[], int m, int arr2[], int n) {
    int temp[20];
    int k = 0;

    for(int i = 0; i < m; i++) {
        temp[k++] = arr1[i];
    }

    for(int i = 0; i < n; i++) {
        bool found = false;
        for(int j = 0; j < m; j++) {
            if(arr2[i] == arr1[j]) {
                found = true;
                break;
            }
        }
        if(!found) {
            temp[k++] = arr2[i];
        }
    }

    cout << "\nUnion: ";
    for(int i = 0; i < k; i++) {
        cout << temp[i] << " ";
    }
}

int main() {
    int arr1[] = {5, 9, 8, 11};
    int arr2[] = {7, 6, 5, 4, 8};

    int arr1_copy[] = {5, 9, 8, 11};   // keep original array

    int size = intersection_arr(arr1, 4, arr2, 5);

    cout << "Intersection: ";
    for(int i = 0; i < size; i++) {
        cout << arr1[i] << " ";
    }
    cout << "\n";

    union_arr(arr1_copy, 4, arr2, 5);  // use original array here
}
