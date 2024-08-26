#include<iostream>
using namespace std;
int main(){
	long long int a, b;
	cin>>a;
	bool x=1;
	for(int i=0;i<a;i++){
		cin>>b;
		if(b%2==1){
			cout<<"YES"<<endl;
			x=0;
		}
		else{
			for(int j=2;j<=a;j++){
				if(b%j==0 && j%2==1){
					cout<<"YES"<<endl;
					x=0;
					break;
				}
			}
		}
		if(x==1){
			cout<<"NO"<<endl;
		}
		x=1;
	}
}