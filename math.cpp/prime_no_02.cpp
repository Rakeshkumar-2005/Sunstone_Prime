#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the numbe:";
    cin>>n;
    bool isPrime=true;
    if(n==2){
        isPrime=true;
    }
    else{
        for(int i=2; i<n; i++){
            if(n%i==0){
                isPrime=false;
                break;
            }
        }if(isPrime){
            cout<<"Prime";
        }else{
            cout<<"Not prime";
        }
    }
}