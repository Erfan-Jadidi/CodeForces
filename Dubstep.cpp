#include<iostream>
using namespace std;
int main(){
	string a, b;
	bool x=0;
	cin>>a;
	for(int i=0;i<a.length();i++){
		if(a[i]=='W' && a[i+1]=='U' && a[i+2]=='B'){
			if(x) cout<<" ";x=0;
			i+=2;
		}
		else{
			x=1;
			cout<<a[i];
		}
	}
}