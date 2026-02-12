#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int arr[100];
    int i = 0;
    while(n >= 1){
        int r=n%2;
        arr[i]=r;
        i++;
        n=n/2;
    }
    for(int j=i-1;j>=0;j--){
        cout<<arr[j];
    }
}