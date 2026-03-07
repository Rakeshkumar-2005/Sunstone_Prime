#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        // Leading spaces
        for (int s = 1; s <= N - i; s++)
            cout << " ";

        // Stars
        for (int j = 1; j <= N; j++) {
            if (i == 1 || i == N || j == 1 || j == N)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
