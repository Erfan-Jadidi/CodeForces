#include<iostream>
using namespace std;
int main(){
	int a, b, blue=0, red=0, blue_1=0, red_1=0;
	cin>>a;
	string s, e;
	for(int i=0;i<a;i++){
		cin>>b>>s>>e;
		blue=0;red=0;
		blue_1=0;red_1=0;
		for(int j=0;j<s.length();j++){
			if(s[j]=='G' or s[j]=='B'){
				blue++;
			}
			else red++;
		}
		for(int j=0;j<s.length();j++){
			if(e[j]=='G' or e[j]=='B'){
				blue_1++;
			}
			else red_1++;
		}
		if(blue==blue_1 && red==red_1){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}