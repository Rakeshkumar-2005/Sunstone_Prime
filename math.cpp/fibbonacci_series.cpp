#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int a = 0, b = 1, curr;

    if (n >= 1) {
        cout << a << " ";
    }
    if (n >= 2) {
        cout << b << " ";
    }

    for (int i = 3; i <= n; i++) {
        curr = a + b;
        cout << curr << " ";
        a = b;
        b = curr;
    }
}
