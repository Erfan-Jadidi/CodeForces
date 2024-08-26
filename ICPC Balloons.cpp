#include<iostream>
using namespace std;
int main(){
	int a, sum=0, b;
	cin>>a;
	string s;
	for(int i=0;i<a;i++){
		cin>>b;
		cin>>s;
		sum=0;
		for(int j=0;j<s.length();j++){
			for(int k=j+1;k<s.length();k++){
				if(s[j]!='a'){
					if(s[j]==s[k]){
						s[k]='a';
					}
				}
			}
		}
		for(int j=0;j<s.length();j++){
			if(s[j]!='a'){
				sum+=2;
			}
			else sum++;
		}
		cout<<sum<<endl;
	}
}