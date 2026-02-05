#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" Enter number :";
    cin>>n;
    // i=row j=col
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j || i+j==n-1){
                cout<<" * ";
            }
            else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }
}