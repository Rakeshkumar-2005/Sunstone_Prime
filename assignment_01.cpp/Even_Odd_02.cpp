// Write a program that takes an integer as input and determines whether the number is even or odd. An even number is divisible by 2, while an odd number is not.


// Input Format
// A single integer, N.


// Constraints
// -10^9<= N <=10^9


// Output Format
// Print "Even" if the number is even.

// Print "Odd" if the number is odd.


// Sample Input
// 10
// Sample Output
// Even
// Explanation
// Example 1

// Input: 10

// Output: Even



// Example 2

// Input: 7

// Output: Odd

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%2==0){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
}