#include<iostream>
using namespace std;
int main(){
	string a;
	cin>>a;
	if(a[0]>='a' && a[0]<='z'){
		a[0]-=32;
	}
	for(int i=1;i<a.length();i++){
		if(a[i]>='A' && a[i]<='Z'){
			a[i]+=32;
		}
	}
	cout<<a;
}