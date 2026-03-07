#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Upper Half (including middle row)
    for (int i = 0; i <= n / 2; i++) {
        // Left side stars
        for (int j = 0; j < n / 2 - i + 1; j++) {
            cout << "*" << "\t";
        }
        // Middle spaces
        for (int j = 0; j < 2 * i - 1; j++) {
            cout << "\t";
        }
        // Right side stars (Mirrors the left side loop)
        for (int j = 0; j < n / 2 - i + 1; j++) {
            if (i == 0 && j == 0) continue; // Skip the duplicate middle star on row 0
            cout << "*" << "\t";
        }
        cout << endl;
    }

    // Lower Half
    for (int i = n / 2 - 1; i >= 0; i--) {
        // Left side stars
        for (int j = 0; j < n / 2 - i + 1; j++) {
            cout << "*" << "\t";
        }
        // Middle spaces
        for (int j = 0; j < 2 * i - 1; j++) {
            cout << "\t";
        }
        // Right side stars (Mirrors the left side loop)
        for (int j = 0; j < n / 2 - i + 1; j++) {
            if (i == 0 && j == 0) continue; // Skip the duplicate middle star on the last row
            cout << "*" << "\t";
        }
        cout << endl;
    }

    return 0;
}