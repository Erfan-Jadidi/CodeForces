#include<bits/stdc++.h>
using namespace std;

int binary(int );

int main(){
	int a, c=0, d=0, e=0, f=0;
	cin>>a;
	//cout<<pow(4);
	e=binary(a);
	char b[e];
	while(a>0){
		d=binary(a);
		for(int i=0;i<=d;i++){
			if(i==d){
				b[i]='1';
			}
			else{
				b[i]='0';
			}
		}
		f=pow(2, d);
		a-=f;
	}
	for(int i=e;i>=0;i--){
		cout<<b[i];
	}
}
int binary(int a){
	int b=0, c=0;
//	b=binary(4);
//	cout<<b<<endl;
	for(int i=1;true;i++){
		b=pow(2, i);
		c=pow(2, i+1);
//		cout<<b<<" "<<c<<endl;
		if(b<=a && c>=a){
			false;
			return i;
//			cout<<"10101";
		}
	}
}
