#include<iostream>
using namespace std;
int main(){
	int a, b, sum=0, ans=0;
	string s;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b>>s;sum=0;ans=0;
		for(int j=0;j<s.length();j++){
			if(int(s[j])==40){
				sum++;
			}
			else{
				sum--;
			}
			if(sum<0){
				ans++;sum=0;
			}
		}
		cout<<ans<<endl;
	}
	//123
}