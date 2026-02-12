#include <iostream>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    // Part 1: Top to Middle (Decreasing stars)
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) cout << "*";
        
        int spaces = 2 * (n - i);
        for(int j = 1; j <= spaces; j++) cout << " ";
        
        for(int j = 1; j <= i; j++) cout << "*";
        cout << endl;
    }

    // Part 2: Below Middle to Bottom (Increasing stars)
    // Start i at 2 to avoid repeating the single-star middle row
    for(int i = 2; i <= n; i++) {
        for(int j = 1; j <= i; j++) cout << "*";
        
        int spaces = 2 * (n - i);
        for(int j = 1; j <= spaces; j++) cout << " ";
        
        for(int j = 1; j <= i; j++) cout << "*";
        cout << endl;
    }

    return 0;
}