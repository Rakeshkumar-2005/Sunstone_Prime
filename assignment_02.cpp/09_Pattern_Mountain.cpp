#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // 1. Print increasing part
        for (int j = 1; j <= i; j++) {
            cout << j << "\t";
        }        for (int j = 1; j <= 2 * (n - i) - 1; j++) {
            cout << "\t";
        }

        // 3. Print decreasing part
int start;

// Check: Are we on the very last row?
if (i == n) {
    start = i - 1; // Start one number lower so the middle isn't doubled
} else {
    start = i;     // Otherwise, start normally from the current row number
}

// Now run the loop using that start point
for (int j = start; j >= 1; j--) {
    cout << j << "\t";
}

        cout << endl;
    }

    return 0;
}