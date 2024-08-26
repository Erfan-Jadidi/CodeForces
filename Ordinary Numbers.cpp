#include <bits/stdc++.h>
using namespace std;
int main() {
	int b;
	cin>>b;
	for(int i=0;i<b;i++){
		int a, ans=0;
		cin>>a;
		for(int j=1;j<=a;j=j*10+1){
			for(int k=1;k<=9;k++){
				if(j*k<=a){
					ans++;
				}
			}
		}
		cout<<ans<<endl;
	}
}