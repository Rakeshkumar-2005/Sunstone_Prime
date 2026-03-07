// Write a program to calculate the bonus amount for an employee based on their years of experience. If the employee has 5 or more years of experience, they receive a bonus of 10% of their salary. Otherwise, they receive no bonus (0).


// Input Format
// Two space-separated integers: the first is the Salary and the second is the Years of Experience.


// Constraints
// 0<= Experience <=100

// 1<= Salary <=10^9


// Output Format
// Print the calculated bonus amount as an integer.


// Sample Input
// 50000 6
// Sample Output
// 5000
// Explanation
// Example 1

// Input: 50000 6

// Output: 5000 (Calculation: 10% of 50000)


// Example 2 Input: 30000 3

// Output: 0 (No bonus for experience less than 5)

#include <iostream>
using namespace std;

int main() {
    long long salary;
    int experience;
    cin >> salary >> experience;

    if (experience >= 5)
        cout << salary / 10;
    else
        cout << 0;

    return 0;
}