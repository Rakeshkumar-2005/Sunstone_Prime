// Write a program that takes an integer as input and checks whether the number is strictly greater than 100.


// Input Format
// A single integer, N.


// Constraints
// -10^9<= N <=10^9


// Output Format
// Print "Greater" if the number is more than 100.

// Print "Not Greater" if the number is 100 or less.


// Sample Input
// 150
// Sample Output
// Greater
// Explanation
// Example 1

// Input: 150

// Output: Greater


// Example 2

// Input: 100

// Output: Not Greater


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>100){
        cout<<"Greater";
    }
    else{
        cout<<"Not Greater";
    }
}