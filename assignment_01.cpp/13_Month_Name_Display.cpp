// Write a program that takes an integer representing a month number (1 to 12) and prints the corresponding month name.

// 1: January

// 2: February

// 3: March

// 4: April

// 5: May

// 6: June

// 7: July

// 8: August

// 9: September

// 10: October

// 11: November

// 12: December


// Input Format
// A single integer representing the month number.


// Constraints
// 1<= Month Number <=12


// Output Format
// Print the name of the month starting with a capital letter.


// Sample Input
// 1
// Sample Output
// January
// Explanation
// Example 1

// Input: 1

// Output: January


// Example 2

// Input: 12

// Output: December


#include <iostream>
using namespace std;

int main() {
    int day;
    cin >> day;

    if (day == 1) cout << "January";
    else if (day == 2) cout << "February";
    else if (day == 3) cout << "March";
    else if (day == 4) cout << "April";
    else if (day == 5) cout << "May";
    else if (day == 6) cout << "June";
    else if (day == 7) cout << "July";
    else if (day == 8) cout << "August";
    else if (day == 9) cout << "September";
    else if (day == 10) cout << "October";
    else if (day == 11) cout << "November";
    else if (day == 12) cout << "December";
    

    return 0;
}