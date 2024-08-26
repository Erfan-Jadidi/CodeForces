#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, temp=0, ans=0, sum=0;
	cin>>a;
	int b[a];
	for(int i=0;i<a;i++){
		cin>>b[i];
		temp+=b[i];
	}
	sort(b, b+a);
	temp/=2;
	for(int i=a-1;i>=0;i--){
		sum+=b[i];ans++;
		if(sum>temp){
			break;
		}
	}
	cout<<ans;
}