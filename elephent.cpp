#include<iostream>
using namespace std;
int main(){
	int a, b=0;
	cin>>a;
	if(a>=5){
		b+=a/5;
		if(a%5!=0) b++;	
	}
	else if(a>=4){
		b+=a/4;
		if(a%4!=0) b++;	
	}
	else if(a>=3){
		b+=a/3;
		if(a%3!=0) b++;	
	}
	else if(a>=2){
		b+=a/2;
		if(a%2!=0) b++;	
	}
	else if(a>=1){
		b+=a/1;
		if(a%1!=0) b++;	
	}
	cout<<b;
}