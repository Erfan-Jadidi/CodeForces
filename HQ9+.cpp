#include<iostream>
using namespace std;
int main(){
	string a;
	cin>>a;
	int ans=0;
	for(int i=0;i<a.length();i++){
		if(int(a[i])>=33 && int(a[i])<=126){
			if(a[i]=='Q' or a[i]=='H' or a[i]=='9'){
				ans=1;
			}
		}
	}
	if(ans==1) cout<<"YES";
	else cout<<"NO";
}