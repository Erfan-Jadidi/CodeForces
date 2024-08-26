#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b, max=0, k;
	cin>>a;
	for(int i=0;i<a;i++){
		max=0;
		cin>>b>>k;
		int c[b], d[b];
		for(int j=0;j<b;j++){
			cin>>c[j];
//			d[j]=c[j];
		}
		sort(c, c+b);
		max=c[b-1];
		while(k>0){
			
			for(int j=0;j<b;j++){
				c[j]=max-c[j];
			}
			k--;
		}
		for(int j=0;j<b;j++){
			cout<<c[j]<<" ";
		}
		cout<<endl;
	}
}