#include<iostream>
using namespace std;
int main(){
	int a, b, c, d, coin, temp=0;
	cin>>a;
	while(a--){
		cin>>b>>c>>d>>coin;
		temp=b+c+d+coin;
		if(temp%3==0){
			temp/=3;
			if(temp>=b and temp>=c and temp>=d){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			} 
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}