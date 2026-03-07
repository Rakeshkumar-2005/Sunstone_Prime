#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // --- PART 1: TOP HALF (Including Middle) ---
    for (int i = 0; i <= n; i++) {
        // 1. Left side (N down to N-i)
        for (int j = 0; j <= i; j++) {
            cout << n - j << " ";
        }

        // 2. Middle spaces
        for (int j = 1; j <= 2 * (n - i) - 1; j++) {
            cout << "  ";
        }

        // 3. Right side (back up to N)
        // If it's the middle row (i == n), start from 1 to avoid double 0
        // 3. Right side: Count back up to N
        int start;
        if (i == n) {
            start = 1; // On the middle row, start at 1 to avoid double 0
        } else {
            start = n - i; // On other rows, start normally
        }

        for (int j = start; j <= n; j++) {
            cout << j << " ";
        }
        
        cout << endl;
    
    }

    // --- PART 2: BOTTOM HALF ---
    for (int i = n - 1; i >= 0; i--) {
        // 1. Left side
        for (int j = 0; j <= i; j++) {
            cout << n - j << " ";
        }

        // 2. Middle spaces
        for (int j = 1; j <= 2 * (n - i) - 1; j++) {
            cout << "  ";
        }

        // 3. Right side
        for (int j = n - i; j <= n; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}