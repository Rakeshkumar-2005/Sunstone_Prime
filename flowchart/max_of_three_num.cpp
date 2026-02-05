#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cout << "Enter first number: " << endl;
    cin >> a;  
    cout << "Enter second number: " << endl;
    cin >> b;
    cout << "Enter third number: " << endl;
    cin >> c;
    if (a >= b && a >= c) {
        cout << "The maximum number is: " << a << endl;
    } 
    else if (b >= a && b >= c) {
        cout << "The maximum number is: " << b << endl;
    } 
    else {
        cout << "The maximum number is: " << c << endl;
    }
    return 0;
}