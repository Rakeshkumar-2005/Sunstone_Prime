#include<iostream>
using namespace std;

//void printSum(int a, int b){
  //  int sum= a+b;

    //cout<<sum<<endl;

//}
int printSum(int a, int b){
    int sum= a+b;

    return sum;
    cout<< sum<<endl;
}
int main(){
    int a=10, b=9;

    // function calling 
   // printSum(a,b);
    cout<<printSum(a,b);

    return 0;
}
