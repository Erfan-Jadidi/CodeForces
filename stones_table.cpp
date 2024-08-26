#include<iostream>
using namespace std;
int main(){
	int a, c=0, d=0;
	cin>>a;
	string b;
	cin>>b;
	d=b.length();
	for(int i=1;i<d;i++){
		if(b[i]!=b[i+1] && b[i]!=b[i-1]){
			c++;
			cout<<"*";
		}
	}
	if(b[0]!=b[1]){
		c++;
	}
	if(b[d]!=b[d-1]){	
		c++;
	}
	cout<<"d: "<<d<<endl<<"c: "<<c<<endl;
	cout<<d-c;
	
	
	
	
	
	
//	for(int i=1;i<d-1;i++){
//		if(b[i]==b[i-1] or b[i]==b[i+1]){
//			c++;/*	5
//					RRRRR
//				*/
//		}
//	}
//	if(b[0]==b[d-1]){
//		c++;
//	}
//	cout<<c;
}