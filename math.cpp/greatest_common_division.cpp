#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    int ans=1;
    for(int i=2;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            ans=i;
        }
        
    }cout<<"Greatest commom division is :"<<ans;
}