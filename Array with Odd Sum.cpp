#include<iostream>
using namespace std;
int main(){
	int a, b, sum=0, odd=0, even=0;
	cin>>a;
	int ans[a];
	for(int i=0;i<a;i++){
		cin>>b;
		int c[b];
		odd=0;even=0;
		for(int j=0;j<b;j++){
			cin>>c[j];
			if(c[j]%2!=0) odd++;
			else even++;
			sum+=c[j];
		}
		if(sum%2!=0){
			cout<<"YES"<<endl;
		}
		else{
			if(odd!=0 && even!=0) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
		sum=0;	
	}
}