#include<iostream>
using namespace std;
int main(){
	int a, zero=0, one=0;
	cin>>a;
	char b[a];
	for(int i=0;i<a;i++){
		cin>>b[i];
	}
	for(int i=0;i<a;i++){
		if(b[i]=='z'){
			zero++;
		}
		else if(b[i]=='n'){
			one++;
		}
	}
	if(one>=zero){
		for(int i=0;i<one;i++){
			cout<<"1 ";
		}
		for(int i=0;i<zero;i++){
			cout<<"0 ";
		}
	}
	else if(zero>one){
		for(int i=0;i<one;i++){
			cout<<"1 ";
		}
		for(int i=0;i<zero;i++){
			cout<<"0 ";
		}
	}
	
}
