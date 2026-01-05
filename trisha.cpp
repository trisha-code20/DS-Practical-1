#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    // O(1) – Constant Time
    cout << "O(1): Constant value = 5" << endl;

    // O(log n) – Logarithmic Time
    cout << "O(log n): ";
    for (int i = n; i > 0; i = i / 2) {
        cout << i << " ";
    }
    cout << endl;

    // O(n) – Linear Time
    cout << "O(n): ";
    for (int i = 1; i <= n; i++) {
        cout << i * i << " ";
    }
    cout << endl;

    // O(n^2) – Quadratic Time
    cout << "O(n^2):" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
