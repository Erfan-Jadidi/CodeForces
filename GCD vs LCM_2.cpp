#include<iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	int b, c[a];
	for(int i=0;i<a;i++){
		cin>>b;
		c[i]=b;
	}
	for(int i=0;i<a;i++){
		cout<<c[i]-3<<" "<<"1 "<<"1 "<<"1"<<endl;
	}
}