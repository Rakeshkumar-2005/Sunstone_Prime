// Write a program that takes a person's age as input and determines if they are eligible to vote. A person is eligible to vote if their age is 18 or greater.


// Input Format
// A single integer representing the age.


// Constraints
// 0 <=A<=150


// Output Format
// Print "Eligible" if the age is 18 or more.

// Print "Not Eligible" if the age is less than 18.


// Sample Input
// 20
// Sample Output
// Eligible
// Explanation
// Example 1

// Input: 20

// Output: Eligible



// Example 2

// Input: 15

// Output: Not Eligible



#include<iostream>
using namespace std;
int main(){
    int age;
    cin>>age;
    if(age>=18){
        cout<<"Eligible";
    }
    else{
        cout<<"Not Eligible";
    }
}