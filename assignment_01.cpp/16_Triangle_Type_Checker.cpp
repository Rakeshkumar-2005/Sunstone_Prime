// Write a program that takes the lengths of the three sides of a triangle and determines its type:

// Equilateral: All three sides are equal.

// Isosceles: Exactly two sides are equal.

// Scalene: All three sides are different.


// Input Format
// A single line containing three space-separated integers representing the sides of the triangle.


// Constraints
// 1<= Side1, Side2, Side3 <=10^6

// Assume the input sides always form a valid triangle.


// Output Format
// Print "Equilateral", "Isosceles", or "Scalene".


// Sample Input
// 5 5 5
// Sample Output
// Equilateral


#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cin>>a >>b >>c;
    if(a==b && b==c && c==a)
    cout<<"Equilateral";
    else if(a==b || b==c  || c==a)
    cout<<"Isosceles";
    else
    cout<<"Scalene";

    return 0;
}