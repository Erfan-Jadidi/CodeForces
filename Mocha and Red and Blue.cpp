#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"

int main(){
	flash;
	int t, size, start=0;
	char temp;
	string s;
	cin>>t;
	
	while(t--){
		cin>>size>>s;
		for(int i=0;i<size+1;i++){
			if(s[i]!='?'){
				for(int j=i-1;j>=0;j--){
					if(s[j+1]=='R'){
						s[j]='B';
					}
					else{
						s[j]='R';
					}
				}
				start=i;
				break;
			}
		}
		for(int i=start;i<size;i++){
			if(s[i]=='?'){
				if(s[i-1]=='R'){
					s[i]='B';
				}
				else{
					s[i]='R';
				}
			}
		}
		cout<<s<<endl;
	}

	return 0;
}
