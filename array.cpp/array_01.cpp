#include<iostream>
using namespace std;
int main(){
    // int odd[10];
    // for(int i=0; i<5;i++){

    // cin>>odd[i];
    // }
    // for(int i=0; i<5;i++){
    // cout<<odd[i]<<endl;
    // }
    // int arr[7];
    // arr[6]=8;
    // cout<<arr[5];
    int arr[5];
    int size = sizeof(arr)/4;
    for(int i=0; i<5;i++){
        cin>>arr[i];
    }
    cout<<size;

}