// Take the following as input.

// A number
// Write a function which returns true if the number is an armstrong number and false otherwise, where Armstrong number is defined as follows.

// A positive integer of n digits is called an Armstrong number of order n (order is number of digits) if.

// abcd… = pow(a,n) + pow(b,n) + pow(c,n) + pow(d,n) + ….

// 1634 is an Armstrong number as 1634 = 1^4 + 6^4 + 3^4 + 4^4

// 371 is an Armstrong number as 371 = 3^3 + 7^3 + 1^3


// Input Format
// Single line input containing an integer


// Constraints
// 0 < N < 1000000000


// Output Format
// Print boolean output for each testcase.
// "true" if the given number is an Armstrong Number, else print "false".


// Sample Input
// 371
// Sample Output
// true
// Explanation
// Use functions. Write a function to get check if the number is armstrong number or not. Numbers are armstrong if it is equal to sum of each digit raised to the power of number of digits.


// code

#include<bits/stdc++.h>
using namespace std;
bool isArmstrong(int n){
	int original=n;
	int digits=0;
	int sum=0;


	//count number
	int temp=n;
	while(temp>0){
		digits++;
		temp=temp/10;
	}


	// calculate sum of power
	temp=n;
	while(temp>0){
		int digit=temp%10;
		sum=sum+pow(digit,digits);
		temp=temp/10;
	}
	return sum==original;
}
int main(){
	int n;
	cin>>n;
	if(isArmstrong(n)){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
}



// logic + code
// Logic

// An Armstrong number (also called a narcissistic number) is a number that is equal to the sum of its digits each raised to the power of the number of digits.

// Steps:

// Read the input number n.

// Find the number of digits in n.

// Extract each digit using % 10.

// Raise the digit to the power of the number of digits.

// Add all these values.

// Compare the sum with the original number.

// If equal → print "true"
// Otherwise → print "false".

// Example (371):

// Digits = 3

// 3
//3^3+7^3+1^3=27+343+1=371=3^3+7^3+1^3
// =27+343+1=371

// Since the sum equals the original number, 371 is an Armstrong number.
