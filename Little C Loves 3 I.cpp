#include<iostream>
using namespace std;
int main(){
	int a, b, c, d;
	cin>>a;
	b=1;
	c=1;
	if((a-2)%3==0){
		c++;
		d=(a-3);
	}
	else{
		d=a-2;
	}
	cout<<b<<" "<<c<<" "<<d;
}