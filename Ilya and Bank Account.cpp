#include<iostream>
using namespace std;
int main(){
	long long int a;
	cin>>a;
	if(a>=0){
		cout<<a;
	}
	else{
		a=-(a);
		if(a%10>=((a%100)-(a%10))/10){
			cout<<-(a/10);
		}
		else{
			cout<<-((a/100)*10+(a%10));
		}
	}
}