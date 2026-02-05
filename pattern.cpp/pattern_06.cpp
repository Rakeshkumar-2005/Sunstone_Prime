#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no:";
    cin>>n;
    // i=row and j=col
    for(int i=0;i<n;i++){
        //space 
        for(int j=0;j<2*i;j++){
            cout<<"   ";
        }
        //star
        {
            for(int j=0 ;j<n-i;j++){
                cout<<" * ";
            }
        }cout<<endl;
    }
}