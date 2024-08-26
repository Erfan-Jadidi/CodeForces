#include<iostream>
using namespace std;
int main(){
	int a, b;
	cin>>a>>b;
	bool x=0;
	while(a*b!=0){
		a--;b--;
		x=!x;
	}
	if(x==0){
		cout<<"Malvika";
	}
	else{
		cout<<"Akshat";
	}
}