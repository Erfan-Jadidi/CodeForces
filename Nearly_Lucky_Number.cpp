#include<iostream>
using namespace std;
int main(){
	long long int a;
	int b=0, c=0;
	cin>>a;
	cout<<a<<endl;
	while(a>0){
		if(a%10==4 or a%10==7){
			b++;
		}
		c++;
		a/=10;
	}
//	cout<<b<<endl<<c<<endl;
	if(b!=c && (b==4 or b==7)){
		cout<<"YES";
	}
	else if(b==c){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}