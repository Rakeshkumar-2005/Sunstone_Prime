// Write a program that takes an integer as input and checks whether the number is zero or non-zero.


// Input Format
// A single integer, N.


// Constraints
// -10^9<= N <=10^9


// Output Format
// Print "Zero" if the number is 0.

// Print "Non-Zero" if the number is any value other than 0.


// Sample Input
// 0
// Sample Output
// Zero
// Explanation
// Example 1

// Input: 0

// Output: Zero


// Example 2

// Input: 45

// Output: Non-Zero

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==0){
        cout<<"Zero";
    }
    else{
        cout<<"Non-Zero";
    }
}