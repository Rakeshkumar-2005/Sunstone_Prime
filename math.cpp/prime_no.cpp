#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    if(n==2){
        cout<<"Prime number";
    }
    else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                cout<<"Not Prime number";
                break;
            }
            else{
                cout<<"Prime number:";
                break;
            }
        }
    }
}    