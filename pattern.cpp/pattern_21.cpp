#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enterr the number:";
    cin>>n;
    for(int i=0; i<n; i++){
        // star
        for(int j=0; j<i+1;j++){
            cout<<" * ";
        }
        // space
        for(int j=0;j< 2*(n-i)-3;j++){
            cout<<"   ";

        }
        // star
        for(int j=0; j<i+1 ;j++) {
            if(j==n-1 && i==n-1){
                cout<<" ";
            }else{
            cout<<" * ";
            }
        }
        cout<<endl;
    }
}