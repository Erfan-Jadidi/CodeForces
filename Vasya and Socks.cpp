#include<iostream>
using namespace std;
int main(){
	int a, b, temp=0, sum=0;
	cin>>a>>b;
	if(b>a){
		cout<<a;
	}
	else{
		temp=a/b;
		sum+=temp;
		sum+=a;
		sum+=temp/b;
		cout<<sum;
	}
}