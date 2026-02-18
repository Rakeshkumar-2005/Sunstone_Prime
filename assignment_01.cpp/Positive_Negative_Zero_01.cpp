// Write a program that takes an integer as input and determines if the number is positive, negative, or zero.


// Input Format
// A single integer, N.


// Constraints
// -10^9<= N <=10^9


// Output Format
// Print "Positive" if the number is greater than 0.

// Print "Negative" if the number is less than 0.

// Print "Zero" if the number is exactly 0.


// Sample Input
// 15
// Sample Output
// Positive
// Explanation
// Example 1

// Input: 15

// Output: Positive


// Example 2

// Input: -8

// Output: Negative









#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    if(n>0){
        cout<<"Positive";
    }
    else if(n<0){
        cout<<"Negative";
    }
    else{
        cout<<"Zero";
    }
}