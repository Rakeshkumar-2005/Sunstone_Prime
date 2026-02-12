#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int totalRows = N;
    int middleRow = (N / 2) + 1;

    // 1. Upper Half (including middle row)
    for (int i = 1; i <= middleRow; i++) {
        // Outer Spaces
        for (int j = 1; j <= (middleRow - i) * 2; j++) {
            cout << "  ";
        }
        // Left Numbers (i down to 1)
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        // Inner Spaces
        for (int j = 1; j <= (i - 1) * 2 - 1; j++) {
            cout << "  ";
        }
        // Right Numbers (1 up to i)
        // Skip printing '1' for the very first row to match the diamond tip
        for (int j = 1; j <= i; j++) {
            if (i == 1 && j == 1) continue; 
            cout << j << " ";
        }
        cout << endl;
    }

    // 2. Lower Half
    for (int i = middleRow - 1; i >= 1; i--) {
        // Outer Spaces
        for (int j = 1; j <= (middleRow - i) * 2; j++) {
            cout << "  ";
        }
        // Left Numbers
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        // Inner Spaces
        for (int j = 1; j <= (i - 1) * 2 - 1; j++) {
            cout << "  ";
        }
        // Right Numbers
        for (int j = 1; j <= i; j++) {
            if (i == 1 && j == 1) continue;
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}