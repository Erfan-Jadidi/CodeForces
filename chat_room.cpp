#include<iostream>
using namespace std;
int main(){
	string a;
	cin>>a;
	int b=0;
	bool c=1, d=0, e=0, f=0, g=0;
	for(int i=0;i<a.length();i++){
		if(a[i]=='h' && c==1){
			b++;
			c=0;
			d=1;
		}
		else if(a[i]=='e' && d==1){
			b++;
			d=0;
			e=1;
		}
		else if(a[i]=='l' && e==1){
			b++;
			e=0;
			f=1;
		}
		else if(a[i]=='l' && f==1){
			b++;
			f=0;
			g=1;
		}
		else if(a[i]=='o' && g==1){
			b++;
			g=0;
			
		}
	}
	if(b==5){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}