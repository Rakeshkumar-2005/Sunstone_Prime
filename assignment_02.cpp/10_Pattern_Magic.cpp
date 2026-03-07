#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Upper Half (including the middle single-star line)
    for (int i = 1; i <= n; i++) {
        // Left stars: N, N-1, ..., 1
        for (int j = 1; j <= n - i + 1; j++) {
            cout << "*";
        }

        // Middle spaces: 0, 1, 3, 5...
        // For the first row, no spaces. For others, 2*(i-1)-1 spaces.
        int spaces = 2 * (i - 1) - 1;
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        // Right stars: Skip the very first star on the first row to avoid N*2 stars
        // The first row is a special case of 2*N-1 stars.
        int rightStars = n - i + 1;
        for (int j = 1; j <= rightStars; j++) {
            if (i == 1 && j == 1) continue; // Skip one star on the top full line
            cout << "*";
        }
        cout << endl;
    }

    // Lower Half
    for (int i = 2; i <= n; i++) {
        // Left stars: 2, 3, ..., N
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Middle spaces
        int spaces = 2 * (n - i) - 1;
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        // Right stars
        for (int j = 1; j <= i; j++) {
            if (i == n && j == 1) continue; // Skip one star on the bottom full line
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}