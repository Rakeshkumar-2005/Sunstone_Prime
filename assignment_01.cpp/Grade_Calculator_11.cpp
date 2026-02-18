// Write a program that takes a student's marks as input and assigns a grade based on the following criteria:

// Marks greater than or equal to 90: Grade A

// Marks greater than or equal to 75 and less than 90: Grade B

// Marks greater than or equal to 60 and less than 75: Grade C

// Marks less than 60: Fail


// Input Format
// A single integer representing the marks.


// Constraints
// 0<= Marks <=100


// Output Format
// Print the character/string representing the grade (A, B, C, or Fail).


// Sample Input
// 85
// Sample Output
// B
// Explanation
// Example 1

// Input: 85

// Output: B


// Example 2

// Input: 45

// Output: Fail

// {...} Code Edi


#include<iostream>
using namespace std;
int main(){
    int marks;
    cin>>marks;
    if(marks>=90){
        cout<<"A";
    }
    else if(marks>=75){
        cout<<"B";
    }
    else if(marks>=60){
        cout<<"C";  
    }
    else{
        cout<<"Fail";
    }
}