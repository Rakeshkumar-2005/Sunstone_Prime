#include<iostream>
using namespace std;
int main(){

    //  Imlict function
    int a=10;
    cout<<sizeof(a)<<endl;
    double b = a;
    cout<<b<<endl;
    cout<<sizeof(b)<<endl;



    bool c = true;
    int d = c;
    cout<< d<<endl;


    char ch = 'c';
    int e = ch;
    cout<< e <<endl;

    // Explict functon
    double f = 10.0;
    int g = (int)f;
    cout<< g<<endl;
    cout<<sizeof(g)<< endl;



    int h= 158;
    char i = (char)h;
    cout<< i<< endl;



    double cal = 9.0/2.0;
    cout<< cal <<endl;
    int newCal = (int)cal;
    cout<< newCal<< endl;


}