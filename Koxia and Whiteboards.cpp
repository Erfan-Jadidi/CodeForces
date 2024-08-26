#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b, c, d, sum=0, plus=0;
	cin>>a;
	int ans[a];
	for(int i=0;i<a;i++){
		cin>>b>>c;
		plus=b+c;
		long long int d[plus];
		for(int j=0;j<plus;j++){
			cin>>d[j];
		}
		sort(d, d+plus);
		for(int j=plus-1;j>plus-b;j--){
			sum+=d[j];
		}
		ans[i]=sum;
		sum=0;
	}
	for(int i=0;i<a;i++){
		cout<<ans[i]<<endl;
	}
}