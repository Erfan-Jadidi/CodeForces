#include<iostream>
using namespace std;
int fact(int );
int main(){
	int a, b, c, e=0, f=0, g=0;
	cin>>a;
	int d[a];
	for(int i=0;i<a;i++){
		cin>>b;
		for(int j=0;j<b;j++){
			cin>>c;
		}
		e=10-b;
		if(e>1){
			f=fact(e);
			g=fact(e-2)*2;
			d[i]=(f/g)*6;
		}
	}
	for(int i=0;i<a;i++){
		cout<<d[i]<<endl;
	}
}
int fact(int a){
	int temp=1;
	for(int i=1;i<=a;i++){
		temp*=i;
	}
	if(a==0){
		temp=1;
	}
	return temp;
}