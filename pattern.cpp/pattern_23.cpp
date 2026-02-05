#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no:";
    cin>>n;
    for(int i=0;i<n;i++){
        //space  i=row j=col
        for(int j=0;j<n-i-1;j++){
            cout<<"   ";
        }
        //star
        for(int j=0; j< 2*i+1 ; j++){
            cout<<" 1 ";
        }cout<<endl;
    }
}