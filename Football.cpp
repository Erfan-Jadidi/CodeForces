#include<iostream>
using namespace std;
int main(){
	string a;
	cin>>a;
	int temp=0, sum=1, ans=0, zero=0, one=0;
	temp=a[0];
	ans=sum;
	for(int i=1;i<a.length();i++){
		if(temp==a[i]) sum++;
		else{
			if(ans<sum) ans=sum;
			temp=a[i];sum=1;
		}
	}
	if(ans<sum) ans=sum;
	if(ans>=7){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}