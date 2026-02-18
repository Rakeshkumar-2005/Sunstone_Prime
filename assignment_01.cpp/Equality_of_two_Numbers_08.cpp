// Submissions
// Leaderboard
// Discuss
// Write a program that takes two integers as input and checks whether they are equal to each other or not.


// Input Format
// A single line containing two space-separated integers, $A$ and $B$.


// Constraints
// -10^9<= A, B <=10^9


// Output Format
// Print "Equal" if the two numbers are the same.

// Print "Not Equal" if the two numbers are different.


// Sample Input
// 10 10
// Sample Output
// Equal
// Explanation
// Example 1

// Input: 10 10

// Output: Equal


// Example 2

// Input: 5 12

// Output: Not Equal


#include<iostream>
using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    if(a==b){
        cout<<"Equal";
    }
    else{
        cout<<"Not Equal";
    }
}