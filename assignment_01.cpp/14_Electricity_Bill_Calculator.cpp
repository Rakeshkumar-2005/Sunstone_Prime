// Write a program to calculate the total electricity bill based on the number of units consumed. 
//The pricing is structured as follows:

// For units less than or equal to 100: ₹2 per unit.

// For units greater than 100 and less than or equal to 200: ₹3 per unit.

// For units greater than 200: ₹5 per unit.


// Input Format
// A single integer representing the total units consumed.


// Constraints
// 0<= Units <=10^6


// Output Format
// Print the total bill amount as an integer.


// Sample Input
// 80
// Sample Output
// 160
// Explanation
// Example 1 Input: 80

// Output: 160 (Calculation: 80 x 2)


// Example 2Input: 150

// Output: 450 (Calculation: 150 x 3)


#include <iostream>
using namespace std;

int main() {
    int units;
    cin >> units;

    int bill;
    if (units <= 100)
        bill = units * 2;
    else if (units <= 200)
        bill = units * 3;
    else
        bill = units * 5;

    cout << bill;
    return 0;
}