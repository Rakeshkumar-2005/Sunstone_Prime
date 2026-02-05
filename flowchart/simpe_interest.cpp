#include <iostream>
using namespace std;
int main(){
    int p,r,t;
    cout<<"Enter principal amount: "<<endl;
    cin>>p; 
    cout<<"Enter rate of interest: "<<endl;
    cin>>r; 
    cout<<"Enter time in years: "<<endl;
    cin>>t;
    int si= (p*r*t)/100;
    cout<<"Simple Interest is: "<<si<<endl;
    return 0;
}