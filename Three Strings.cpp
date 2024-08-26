#include<iostream>
using namespace std;
int main(){
	int a, temp=0;
	cin>>a;
	string b, c, d;
	for(int i=0;i<a;i++){
		cin>>b>>c>>d;temp=0;
		for(int j=0;j<b.length();j++){
//			cout<<int(b[j])<<endl;
			if((int(b[j])<=99 && int(b[j])>=97) && (int(c[j])<=99 && int(c[j])>=97) &&
			 (int(d[j])<=99 && int(d[j])>=97)){
				if(b[j]==c[j]) temp++;
				else if(b[j]==d[j]) temp++;
				else if(c[j]==d[j]) temp++;
				else break;
			}
			else break;
		}
		if(temp==b.length()) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}