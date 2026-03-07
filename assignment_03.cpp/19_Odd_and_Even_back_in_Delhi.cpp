// Due to an immense rise in Pollution, Kejriwal is back with the Odd and Even Rule in Delhi. The scheme is as follows, each car will be allowed to run on Sunday if the sum of digits which are even is divisible by 4 or sum of digits which are odd in that number is divisible by 3. However to check every car for the above criteria can't be done by the Delhi Police. You need to help Delhi Police by finding out if a car numbered N will be allowed to run on Sunday?


// Input Format
// The first line contains N , then N integers follow each denoting the number of the car.


// Constraints
// N<=1000 Car No >=0 && Car No <=1000000000


// Output Format
// N lines each denoting "Yes" or "No" depending upon whether that car will be allowed on Sunday or Not !


// Sample Input
// 2
// 12345
// 12134
// Sample Output
// Yes
// No
// Explanation
// 1 + 3 + 5 = 9 which is divisible by 3
// 1 + 1 + 3 = 5 which is NOT divisible by 3 and 2+4 = 6 which is not divisble by 4.


//     code



#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		long long car;
		cin>>car;
		int oddSum=0,evenSum=0;
		while(car>0){
			int digit=car%10;
			if(digit%2==0){
				evenSum+=digit;
			}
			else{
				oddSum+=digit;
			}
			car=car/10;
		}
		if(evenSum%4==0 || oddSum%3==0){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
}


// logic


// Delhi Odd–Even rule (Sunday special):

// Ek car number allowed hoga agar:

// 1️⃣ Even digits ka sum nikalo

// Agar sum % 4 == 0 → Car allowed

// OR

// 2️⃣ Odd digits ka sum nikalo

// Agar sum % 3 == 0 → Car allowed

// Agar dono conditions false hain → Car allowed nahi hai.

// Steps

// For each car number:

// oddSum = 0, evenSum = 0

// Number ke har digit ko extract karo using %10

// Check digit:

// agar digit % 2 == 0 → evenSum me add

// warna → oddSum me add

// Loop end hone ke baad check karo:

// evenSum % 4 == 0  OR  oddSum % 3 == 0

// True → Yes
// False → No