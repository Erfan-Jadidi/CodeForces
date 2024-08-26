#include<iostream>
using namespace std;
int main(){
	long long int a, b;
	cin>>a;
	bool x=0;
	for(int i=0;i<a;i++){
		cin>>b;
		if(b>=2020){
			for(int j=0;true;j++){
				if((2021*j)<=b){
					if((b-(2021*j)) % 2020==0){
						cout<<"YES "<<endl;
						x=1;
						break;
					}
				}
				else{
					break;
				}
			}
			if(x==0){
				cout<<"NO"<<endl;
			}
		}
		else{
			cout<<"NO"<<endl;
		}
		x=0;
	}
}