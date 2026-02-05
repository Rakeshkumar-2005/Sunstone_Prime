#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number row :";
    cin>>n;
    // i=row
    for(int i=0 ; i<n ; i++){
        for(int j=0; j<n; j++){  // j= col
            cout<<" * "; 
        }
        cout<<endl;  
    }
}