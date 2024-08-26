#include<iostream>
using namespace std;
int main(){
	long long int a, b, temp=0;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b;
		temp+=b;
	}
	if(temp%4!=0){
		temp=(temp/4)+1;
	}
	else{
		temp/=4;
	}
	cout<<temp;
}