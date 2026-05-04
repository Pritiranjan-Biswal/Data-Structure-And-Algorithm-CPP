#include <iostream>
using namespace std;

int main() {
    int N, K, P;
    
    cin >> N >> K >> P;

    int result = ((P+K-1) % N) + 1;

    cout << result << endl;

    return 0;
}