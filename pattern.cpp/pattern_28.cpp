#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no:";
    cin>>n;
    
    for(int i=0;i<n;i++){
        //space  i=row j=col
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //num   1
        for(int j=0; j<i+1 ; j++){
            cout<<j+1;
        }
        // num 2
        for(int j=i; j>0; j--){
            cout<<j;
        }cout<<endl;

    }
}    