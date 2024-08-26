#include<iostream>
using namespace std;
int main(){
	int a, b, c, d=0;
	cin>>a>>b>>c;
	for(int i=1;i<=c;i++){
		d+=i*a;
	}
	if(d-b==0 or d-b<0){
		cout<<"0";
	}
	else{
		cout<<d-b;
	}
}