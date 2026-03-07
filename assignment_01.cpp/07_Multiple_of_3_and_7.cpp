// Write a program that takes an integer as input and determines whether it is a multiple of both 3 and 7. A number is a multiple of both if it is divisible by both numbers without leaving a remainder.


// Input Format
// A single integer, N.


// Constraints
// 1<= N <=10^9


// Output Format
// Print "Yes" if the number is a multiple of both 3 and 7.

// Print "No" otherwise.


// Sample Input
// 21
// Sample Output
// Yes
// Explanation
// Example 1

// Input: 21

// Output: Yes


// Example 2

// Input: 14

// Output: No (Note: 14 is divisible by 7 but not by 3)


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%3==0 && n%7==0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}