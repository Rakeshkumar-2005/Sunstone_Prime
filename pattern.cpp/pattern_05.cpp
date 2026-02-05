#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number row :";
    cin>>n;
    // i= row   j=col 

    //space
    for(int i=0 ; i<n ; i++){
        for(int j=0; j<=i; j++){
            cout<<"   "; 
        }
        for(int j=0; j<n-i;j++){   //star
            cout<<" * ";
        }cout<<endl;
    }
}