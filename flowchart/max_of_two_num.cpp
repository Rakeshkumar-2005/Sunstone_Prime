#include <iostream>
using namespace std;
int main(){
    int a, b;
    cout << "Enter first number: " << endl;
    cin >> a;
    cout << "Enter second number: " << endl;
    cin >> b;
    if (a > b) {
        cout << "The maximum number is: " << a << endl;
    } 
    else {
        cout << "The maximum number is: " << b << endl;
    }
    return 0;
}