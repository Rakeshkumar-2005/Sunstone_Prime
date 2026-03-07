#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int mid= n/2;
	for(int i=0; i<=mid;i++){
		for(int j=0;j<mid-i;j++){
			cout<<"\t";
		}
		for(int j=0;j<2*i+1;j++){
			cout<<"*"<<"\t";
		}cout<<endl;
	}
	for(int i=mid-1;i>=0;i--){
		for(int j=0;j<mid-i;j++){
			cout<<"\t";
		}
		for(int j=0;j<2*i+1;j++){
			cout<<"*"<<"\t";
		}cout<<endl;

	}
	return 0;
}
