#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b, ans=0;
	cin>>a>>b;
	int c[a];
	for(int i=0;i<a;i++){
		cin>>c[i];
	}
	sort(c, c+a);
	for(int i=0;i<a;i++){
		if(b>0){
			if(c[i]<0){
				ans+=c[i];
				b--;
			}
		}
		else{
			break;
		}
	}
	cout<<abs(ans);
}