// Take as input a number N, print "Prime" if it is prime if not Print "Not Prime".


// Input Format

// Constraints
// 2 < N <= 1000000000


// Output Format

// Sample Input
// 3
// Sample Output
// Prime
// Explanation
// The output is case specific

#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	bool isPrime=true;
	if(n==2){
		isPrime=true;
	}
	else{
		for(int i=2;i<n;i++){
			if(n%i==0){
				isPrime=false;
				break;
			}
		}
		if(isPrime){
			cout<<"Prime";
		}
		else{
			cout<<"Not Prime";
		}
	}return 0;
}