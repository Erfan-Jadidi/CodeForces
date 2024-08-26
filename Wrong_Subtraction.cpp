#include<iostream>
using namespace std;
int main(){
	int a, b=0;
	cin>>a>>b;
	while(b>0){
		if(a%10==0){
			a/=10;
			b--;
		}
		else{
			a--;
			b--;
		}
	}
	cout<<a;
}