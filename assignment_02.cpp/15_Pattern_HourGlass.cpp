#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Upper half (including middle row)
    for (int i = n; i >= 0; i--) {

        // Print spaces
        for (int j = 0; j < (n - i); j++) {
            cout << "  ";
        }

        // Print decreasing numbers
        for (int j = i; j >= 0; j--) {
            cout << j << " ";
        }

        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        cout << endl;
    }

    // Lower half
    for (int i = 1; i <= n; i++) {

        // Print spaces
        for (int j = 0; j < (n - i); j++) {
            cout << "  ";
        }

        // Print decreasing numbers
        for (int j = i; j >= 0; j--) {
            cout << j << " ";
        }

        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
