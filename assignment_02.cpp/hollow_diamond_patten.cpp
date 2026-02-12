#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enterr the number:";
    cin>>n;

    int mid = n/2 + 1;
    int space = -1;


    for(int i=0; i<n ;i++){
        for(int j=0;j<mid;j++){
            cout<<"*"<<"\t";
        }
        for(int j=0; j< space ;j++){
            cout<<"\t";
        }
        if(i==1  || i==n){
            for(int j=2;j<mid;j++){
                cout<<"*"<<"\t";
            }
        }
        else{
                
        }
        cout<<endl;
    }

}

