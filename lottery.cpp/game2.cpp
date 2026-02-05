#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    // Mobile
    if (n >= 300 && n <= 460) {
        cout << "Mobile" << endl;
        if (n >= 300 && n <= 350)
            cout << "M1 Model" << endl;
        else
            cout << "M2 Model" << endl;
    }

    // Kurkure
    else if (n >= 200 && n <= 280) {
        cout << "Kurkure" << endl;
        if (n >= 200 && n <= 240)
            cout << "Chilli Kurkure" << endl;
        else
            cout << "Onion Kurkure" << endl;
    }

    // Cycle
    else if (n >= 1100 && n <= 1500) {
        cout << "Cycle" << endl;
        if (n >= 1100 && n <= 1300)
            cout << "Avon Cycle" << endl;
        else
            cout << "Hero Cycle" << endl;
    }

    // Bike
    else if (n >= 50 && n <= 80) {
        cout << "Bike" << endl;
        if (n >= 50 && n <= 65)
            cout << "Bullet" << endl;
        else
            cout << "Rajdoot" << endl;
    }

    else {
        cout << "No Prize" << endl;
    }
}