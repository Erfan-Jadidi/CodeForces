#include<iostream>
using namespace std;
int main(){
//	int e=0, f=0;
//	string a, b;
//	char c, d, g;
//	cin>>a>>b;
//	for(int i=0;i<a.size();i++){
//		c=a[i];
//		if(int(c)>=97 && int(c)<=122){
//			d=c-32;
//		}
//		else{
//			d=c+32;
//		}
//		
//		if(int(b[i])>=97 && int(b[i])<=122){
//			g=b[i]-32;
//		}
//		else{
//			g=b[i]+32;
//		}
//		
//		if(c==b[i] or d==b[i] or c==g or d==g){
//			e++;
//		}
//		else{
//			if(int(c)>int(b[i])){
//				f=1;
//			}
//			else{
//				f=-1;
//			}
//		}
//	}
//	if(e==a.size()){
//		cout<<"0";
//	}
//	else{
//		cout<<f;
//	}
	string a, b;
	cin>>a>>b;
	for(int i=0;i<=a.length();i++){
		if(a[i]>='A' && a[i]<='Z'){
			a[i]+=32;
		}
		if(b[i]>='A' && b[i]<='Z'){
			b[i]+=32;
		}
		if(b[i]<a[i]){
			cout<<"1";
			return 0;
		}
		else if(b[i]>a[i]){
			cout<<"-1";
			return 0;
		}
	}
	cout<<"0";
}