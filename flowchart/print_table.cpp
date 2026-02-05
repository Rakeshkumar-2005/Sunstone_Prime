#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter table number :";
    cin>>n;
    for(int i=1;i<=10;i++){
        cout<<i<<" * "<<n<<" = "<<i*n<<endl;
    }
}