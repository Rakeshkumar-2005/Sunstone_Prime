#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int i=0;
    int d=0;
    while(n>0){
        int r=n%10;
        d = d + r*pow(2,i);
            i++;
        n=n/10;
    }cout<<d;
}