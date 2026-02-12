#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enterr the number:";
    cin>>n;
    for(int i=0; i<n; i++){
        // star
        for(int j=0; j<i+1;j++){
            cout<<j<<"\t";
        }
        // space
        for(int j=0;j< 2*(n-i)-3;j++){
            cout<<"\t";

        }
        // star
        for(int j=0; j<i+1 ;j++) {
            if(j==n-1 && i==n-1){
                cout<<"\t";
            }else{
            cout<<j;
            }
        }
        cout<<endl;
    }
}