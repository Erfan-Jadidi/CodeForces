#include<bits/stdc++.h>
using namespace std;
#define migmig ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
	migmig;
	int a, b, tmp=0, mal, hash;
	cin>>a>>b;
	string c;
	cin>>c;
	for(int i=0;i<c.length();i++){
		if(c[i]=='G'){
			mal=i;
			tmp++;
		}
		else if(c[i]=='T'){
			hash=i;
			tmp++;
		}
		if(tmp==2){
			break;
		}
	}
	if(mal>hash){
		mal+=hash;
		hash=mal-hash;
		mal-=hash;
	}
//	cout<<mal<<"-->"<<hash<<"  ";
	if((hash-mal)%b==0){
		for(int i=mal;i<=hash;i+=b){
			if(c[i]=='#'){
				cout<<"NO";
				return 0;
			}
		}
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}

	return 0;
}
