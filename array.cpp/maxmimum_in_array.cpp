#include<iostream>
using namespace std;
int main(){
    int arr[]={2,7,-1,0,9,4};
    int maxi=arr[0];
    for(int i=0;i<6;i++){
        if(maxi<arr[i]){
            maxi=arr[i];
        }
    }cout<<maxi<<endl;
} 
