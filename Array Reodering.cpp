#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b;
	cin>>a;
	while(a--){
		cin>>b;
		int c[b], ans=0;
		for(int i=0;i<b;i++){
			cin>>c[i];
		}
		sort(c, c+b, greater<int>());
		for(int i=0;i<b-1;i++){
			for(int j=i+1;j<b;j++){
				if(__gcd(c[i], (2*c[j]))>1){
//					cout<<__gcd(c[i], (2*c[j]))<<endl;
					ans++;
				}
			}
		}
		cout<<ans<<endl;
	}
}