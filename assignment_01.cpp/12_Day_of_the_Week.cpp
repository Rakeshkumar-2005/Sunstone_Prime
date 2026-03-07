// Write a program that takes an integer representing a day number (1 to 7) and prints the corresponding day name. Assume the week starts with Monday.

// 1: Monday

// 2: Tuesday

// 3: Wednesday

// 4: Thursday

// 5: Friday

// 6: Saturday

// 7: Sunday


// Input Format
// A single integer representing the day number.


// Constraints
// 1<= Day Number <=7


// Output Format
// Print the name of the day starting with a capital letter.


// Sample Input
// 1
// Sample Output
// Monday
// Explanation
// Example 1

// Input: 1

// Output: Monday


// Example 2

// Input: 4

// Output: Thursday


#include <iostream>
using namespace std;

int main() {
    int day;
    cin >> day;

    if (day == 1) cout << "Monday";
    else if (day == 2) cout << "Tuesday";
    else if (day == 3) cout << "Wednesday";
    else if (day == 4) cout << "Thursday";
    else if (day == 5) cout << "Friday";
    else if (day == 6) cout << "Saturday";
    else if (day == 7) cout << "Sunday";

    return 0;
}