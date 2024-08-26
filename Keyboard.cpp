#include<bits/stdc++.h>
using namespace std;
int main(){
	char a;
	cin>>a;
	string b;
	cin>>b;
	char c[b.length()];
	string one="qwertyuiop", two="asdfghjkl;", three="zxcvbnm,./";
	int find=0;
	if(a=='R'){
		for(int i=0;i<b.length();i++){
			find=one.find(b[i]);
			if(find!=string::npos){
				c[i]=one[find-1];
			}
			else{
				find=two.find(b[i]);
				if(find!=string::npos){
					c[i]=two[find-1];
				}
				else{
					find=three.find(b[i]);
					if(find!=string::npos){
						c[i]=three[find-1];
					}
				}
			}
		}
	}
	else{
		for(int i=0;i<b.length();i++){
			find=one.find(b[i]);
			if(find!=string::npos){
				c[i]=one[find+1];
			}
			else{
				find=two.find(b[i]);
				if(find!=string::npos){
					c[i]=two[find+1];
				}
				else{
					find=three.find(b[i]);
					if(find!=string::npos){
						c[i]=three[find+1];
					}
				}
			}
		}
	}
	for(int i=0;i<b.length();i++){
		cout<<c[i];
	}
}