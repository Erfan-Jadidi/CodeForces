#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, d=0, temp=0, e=0, ans=0;
	cin>>a;
	int b[a];
	for(int i=0;i<a;i++){
		cin>>b[i];
	}
	sort(b, b+a);
	cin>>d;
	for(int i=0;i<d;i++){
		cin>>e;
		ans=upper_bound(b, b+a, e)-b;
		cout<<ans<<endl;
	}
		
	
}