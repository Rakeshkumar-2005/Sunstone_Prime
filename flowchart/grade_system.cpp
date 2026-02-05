#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 91 && marks <= 100) {
        cout << "Grade: A";
    }
    else if (marks >= 81 && marks <= 90) {
        cout << "Grade: B";
    }
    else if (marks >= 71 && marks <= 80) {
        cout << "Grade: C";
    }
    else if (marks >= 61 && marks <= 70) {
        cout << "Grade: D";
    }
    else if (marks >= 51 && marks <= 60) {
        cout << "Grade: E";
    }
    else if (marks >= 0 && marks <= 50) {
        cout << "Grade: F";
    }
    else {
        cout << "Invalid marks";
    }
    return 0;
}