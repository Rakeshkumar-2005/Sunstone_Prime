// Write a program that takes an integer as input and determines whether it is divisible by 5. A number is divisible by 5 if the remainder is 0 when divided by 5.


// Input Format
// A single integer, N.


// Constraints
// -10^9<= N <=10^9


// Output Format
// Print "Divisible" if the number is divisible by 5.

// Print "Not Divisible" if the number is not divisible by 5.


// Sample Input
// 25
// Sample Output
// Divisible
// Explanation
// Example 1

// Input: 25

// Output: Divisible


// Example 2

// Input: 14

// Output: Not Divisible


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%5==0){
        cout<<"Divisible";
    }
    else{
        cout<<"Not Divisible";
    }
}