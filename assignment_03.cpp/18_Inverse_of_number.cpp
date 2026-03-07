// Take the following as input.
// A number
// Assume that for a number of n digits, the value of each digit is from 1 to n and is unique. E.g. 32145 is a valid input number.

// Write a function that returns its inverse, where inverse is defined as follows

// Inverse of 32145 is 12543. In 32145, “5” is at 1st place, therefore in 12543, “1” is at 5th place; in 32145, “4” is at 2nd place, therefore in 12543, “2” is at 4th place.

// Print the value returned.


// Input Format
// Integer


// Constraints
// 0 < N < 1000000000


// Output Format
// Integer


// Sample Input
// 32145
// Sample Output
// 12543
// Explanation
// Assume that for a number of n digits, the value of each digit is from 1 to n and is unique. E.g. 32145 is a valid input number. Inverse of 32145 is 12543. In 32145, “5” is at 1st place, therefore in 12543, “1” is at 5th place; in 32145, “4” is at 2nd place, therefore in 12543, “2” is at 4th place




#include<bits/stdc++.h>
using namespace std;
int inverseNumber(int n){
	int pos=1;
	int inverse=0;
	while(n>0){
		int digit=n%10;
		inverse=inverse+pos*pow(10,digit-1);
		n=n/10;
		pos++;
	}
	return inverse;
}
int main() {
	int n;
	cin>>n;
	cout<<inverseNumber(n);
    return 0;
}



// logic

// Inverse number ka matlab:

// Original number me jo digit jis position par hai, inverse number me position aur digit swap ho jate hain.

// Rule:

// Agar digit = d

// Aur position = p

// To inverse number me:

// p digit d position par hoga

// Matlab:

// inverse += p * 10^(d-1)
// Example

// Input

// 32145

// Original number ko right se read karte hain.

// Position (p)	Digit (d)	Inverse me
// 1	5	1 at position 5
// 2	4	2 at position 4
// 3	1	3 at position 1
// 4	2	4 at position 2
// 5	3	5 at position 3

// Inverse number:

// 