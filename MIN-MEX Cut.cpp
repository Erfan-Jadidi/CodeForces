#include<iostream>
using namespace std;
int main(){
	int a, zero=0;
	cin>>a;
	string s;
	for(int i=0;i<a;i++){
		cin>>s;zero=0;
		for(int j=0;j<s.length();j++){
			if(s[j]=='0'){
				zero++;
			}
		}
		if(zero==0){
			cout<<"0"<<endl;
		}
		else{
			int st=s.find('0');
			int nd=s.rfind('0');
			if(nd-st+1==zero){
				cout<<"1"<<endl;
			}
			else{
				cout<<"2"<<endl;
			}
		}
	}
}