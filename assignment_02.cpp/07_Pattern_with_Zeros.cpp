#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        if(i == 1) {
            cout << 1;
        } else {
            cout << i << "\t";
            for(int j = 1; j <= i - 2; j++)
                cout << 0 << "\t";
            cout << i;
        }
        cout << endl;
    }

    return 0;
}