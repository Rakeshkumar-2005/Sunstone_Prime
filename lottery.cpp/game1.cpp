#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" Enter rupees:";
    cin>>n;
    if(n>=300 && n<=460){
        cout<<"Price mac Book"<<endl;
    }
    else if(n>=200 && n<=280){
        cout<<" Kur"<<endl;
    }
    else if(n>=1100 && n<=1500){
        cout<<"cycle"<<endl;

    }
    else if(n>=50 && n<=80){
        cout<<"bike"<<endl;
    }
    else{
        cout<<"better luck next time";
    }
}