// #include<iostream>
// using namespace std;
// int main() {
// 	int n;
// 	cin>>n;
//     int result=0;
//     int place=1;
//     if (n == 0) {
//         cout << 5 << endl;
    
//     }
// 	while(n>0){
// 		int digit = n%10;
// 		if(digit==0){
// 			digit=5;
// 		}
//         result= result + (digit*place);
//         place = place * 10;
// 		n=n/10;
// 	}
// 	cout<<result<<endl;
// 	return 0;
// }
#include <iostream>


using namespace std;

int main() {
    string n;
    // Read the input as a string to handle very large numbers easily
    if (!(cin >> n)) return 0;

    // Iterate through each character in the string
    for (int i = 0; i < n.length(); i++) {
        if (n[i] == '0') {
            n[i] = '5';
        }
    }

    cout << n << endl;
    return 0;
}
