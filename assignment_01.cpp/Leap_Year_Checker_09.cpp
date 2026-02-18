// Write a program to determine if a given year is a leap year. A year is a leap year if:

// It is divisible by 400, OR

// It is divisible by 4 but not divisible by 100.


// Input Format
// A single integer representing the year.


// Constraints
// 1<= Year <=10^4


// Output Format
// Print "Leap Year" if the condition is met.

// Print "Not a Leap Year" otherwise.


// Sample Input
// 2000
// Sample Output
// Leap Year
// Explanation
// Example 1

// Input: 2000

// Output: Leap Year


// Example 2

// Input: 1900

// Output: Not a Leap Year

#include<iostream>
using namespace std;
int main(){
    int year;
    cin>>year;
    if(year%400==0 || (year%4==0 && year%100 !=0 )){
        cout<<"Leap Year";
    }
    else{
        cout<<"Not a Leap Year";
    }
}