// Take N (number in binary format). Write a function that converts it to decimal format and Print the value returned.


// Input Format

// Constraints
// 0 < N <= 1000000000


// Output Format

// Sample Input
// 101010
// Sample Output
// 42
// Explanation
// For binary number fedcba , Decimal number = f * 25 + e * 24 + d * 23 + …..+ a * 20.





#include<bits/stdc++.h>
using namespace std;

int binarytoDecimal(int n){
	int i=0;
	int digit=0;
	while(n>0){
		int reminder=n%10;
		digit= digit + reminder*pow(2,i);
		i++;
		n=n/10;
	}return digit;
}

int main() {
	int n;
	cin>>n;
	cout<<binarytoDecimal(n);

	return 0;
}