#include<iostream>
using namespace std;
int main(){
	int a, b=0;
	cin>>a;
//	cout<<a<<endl;
	if(a%4==0 or a%7==0){
		cout<<"YES";
		return 0;
	}
	while(a>0){
		b=a%10;
		if(b!=7 && b!=4){
			cout<<"NO";
			return 0;
		}
		a/=10;
	}
	cout<<"YES";
	return 0;
}