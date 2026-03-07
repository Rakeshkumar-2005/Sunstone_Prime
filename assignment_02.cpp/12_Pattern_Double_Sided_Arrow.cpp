#include <iostream>
using namespace std;

int main() {
    int N,n;
    cin >> n;
	N=n/2+1;
    int totalRows = 2 * N - 1;

    for (int i = 1; i <= totalRows; i++) {
        int row;

        // Determine row value
        if (i <= N)
            row = i;
        else
            row = totalRows - i + 1;

        // Print leading spaces
        for (int s = 1; s <= (N - row); s++) {
            cout << "    ";
        }

        // Print descending numbers
        for (int j = row; j >= 1; j--) {
            cout << j<<" " ;
        }

        // Print middle spaces
        if (row > 1) {
            int spaces = 2 * (row - 1) - 1;
            for (int s = 1; s <= spaces; s++) {
                cout << "  ";
            }

            // Print ascending numbers
            for (int j = 1; j <= row; j++) {
                cout << j <<" " ;
            }
        }

        cout << endl;
    }

    return 0;
}