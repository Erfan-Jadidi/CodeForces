#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int a, ans=0, b;
	cin>>a;
	while(a--){
		cin>>b;ans=0;//10^(ted-1)
		while(b>=10){
			for(int i=1;true;i++){
				if(pow(10, i)<=b and pow(10, i+1)>b){
					ans+=pow(10, i);
					b-=pow(10, i);
					b+=pow(10, i-1);
					break;
				}
			}
		}
		ans+=b;
		cout<<ans<<endl;
	}
}