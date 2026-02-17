#include <iostream>
using namespace std;

int main() {
    int n = 7; // Size of the pattern (odd number works best)
    int mid = n / 2 + 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            
            // 1. Middle row and Middle column
            if (i == mid || j == mid) {
                cout << "* ";
            }
            // 2. Top-left vertical bar
            else if (j == 1 && i < mid) {
                cout << "* ";
            }
            // 3. Top-right horizontal bar
            else if (i == 1 && j > mid) {
                cout << "* ";
            }
            // 4. Bottom-right vertical bar
            else if (j == n && i > mid) {
                cout << "* ";
            }
            // 5. Bottom-left horizontal bar
            else if (i == n && j < mid) {
                cout << "* ";
            }
            // Fill the rest with spaces
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}