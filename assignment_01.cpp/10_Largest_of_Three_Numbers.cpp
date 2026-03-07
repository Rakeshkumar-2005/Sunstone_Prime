// Write a program that takes three integers as input and determines which one is the largest.


// Input Format
// A single line containing three space-separated integers: A, B, and C.


// Constraints
// -10^9 <= A, B, C <= 10^9


// Output Format
// Print the value of the largest integer among the three.


// Sample Input
// 10 25 15
// Sample Output
// 25
// Explanation
// Example 1

// Input: 10 25 15

// Output: 25


// Example 2

// Input: -5 -2 -10

// Output: -2


#include<iostream>
using namespace std;
int main(){
    int a, b , c;
    cin>>a>>b>>c;
    if(a>=b && a>=c){
        cout<<a;
    }
    else if(b>=a && b>=c){
        cout<<b;
    }
    else{
        cout<<c;
    }
}