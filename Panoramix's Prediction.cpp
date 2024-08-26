#include<iostream>
using namespace std;
int IsPrime(int a);
int main(){
	int a, b;
	cin>>a>>b;
	for(int i=a+1;true;i++){
		if(IsPrime(i)){
			if(i==b){
				cout<<"YES";
				break;
			}
			else{
				cout<<"NO";
				break;
			}
		}
	}
}
int IsPrime(int a){
	int temp=0;
	for(int i=2;i<=(a/2)+1;i++){
		if(a%i==0){
			temp++;
		}
	}
	if(temp==0){
		return 1;
	}
	else{
		return 0;
	}
	return 0;
}