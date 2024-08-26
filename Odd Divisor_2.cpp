#include<iostream>
using namespace std;
int main(){
	long long int a, b;
	cin>>a;
	bool c=0;
	for(int i=0;i<a;i++){
		cin>>b;
		if(b%2==1){
			cout<<"YES"<<endl;
			c=1;
		}
		else{
			while(b%2==0){
				b/=2;
			}
			if(b>1){
				cout<<"YES"<<endl;
				c=1;
			}
		}
		if(c==0){
			cout<<"NO"<<endl;
		}
		c=0;
	}
}