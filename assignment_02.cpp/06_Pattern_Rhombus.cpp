#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Upper half and middle row (1 to n)
    for (int i = 1; i <= n; i++) {
        // Print leading spaces (tabs)
        for (int j = 1; j <= n - i; j++) {
            cout << "\t";
        }

        // Print increasing numbers
        int val = i;
        for (int j = 1; j <= i; j++) {
            cout << val << "\t";
            val++;
        }

        // Print decreasing numbers
        val -= 2;
        for (int j = 1; j <= i - 1; j++) {
            cout << val << "\t";
            val--;
        }
        cout << endl;
    }

    // Lower half (n-1 down to 1)
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces (tabs)
        for (int j = 1; j <= n - i; j++) {
            cout << "\t";
        }

        // Print increasing numbers
        int val = i;
        for (int j = 1; j <= i; j++) {
            cout << val << "\t";
            val++;
        }

        // Print decreasing numbers
        val -= 2;
        for (int j = 1; j <= i - 1; j++) {
            cout << val << "\t";
            val--;
        }
        cout << endl;
    }

    return 0;
}