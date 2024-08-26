#include<iostream>
using namespace std;
int main(){
	long long int a, b, c, d=0, e=0;
	cin>>a>>b>>c;
	d=a/c;
	e=b/c;
	if(a%c==0 and b%c==0){
		cout<<d*e;
	}
	else if(a%c==0 and b%c!=0){
		cout<<d*(e+1);
	}
	else if(a%c!=0 and b%c==0){
		cout<<(d+1)*e;
	}
	else if(a%c!=0 && b%c!=0){
		cout<<(d+1)*(e+1);
	}
}