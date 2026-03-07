// Take the following as input.

// A number (N1)
// A number (N2)
// Write a function which returns the LCM of N1 and N2. Print the value returned.


// Input Format

// Constraints
// 0 < N1 < 1000000000
// 0 < N2 < 1000000000


// Output Format

// Sample Input
// 4 
// 6
// Sample Output
// 12
// Explanation
// The smallest number that is divisible by both N1 and N2 is called the LCM of N1 and N2.



#include<iostream>
using namespace std;
int gcd(int n1, int n2){
	int ans;
	for(int i=2;i<=min(n1,n2);i++){
		if(n1%i==0 && n2%i==0){
			ans=i;
		}
	}return ans;
}
int lcm(int n1,int n2){
	return (n1*n2)/gcd(n1,n2);
}
int main() {
	int n1, n2;
	cin>>n1>>n2;
	cout<<lcm(n1,n2);
	return 0;
}
