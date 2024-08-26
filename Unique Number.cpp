#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b, c[9]={9, 8, 7, 6, 5, 4, 3, 2, 1};
	cin>>a;
	while(a--){
		string ans="";
		cin>>b;
		if(b<46){
			for(int i=0;i<9;i++){
				if(c[i]<=b){
					ans+=to_string(c[i]);
					b-=c[i];
				}
			}
			for(int i=ans.length()-1;i>=0;i--){
				cout<<ans[i];
			}
			cout<<endl;
		}
		else{
			cout<<"-1"<<endl;
		}
	}
}