#include<iostream>
using namespace std;
int main(){
	int b=0, c=0;
	string a, d, e;
	cin>>a;
	d=a;
	e=a;
	for(int i=0;i<a.length();i++){
		if(a[i]>='A' && a[i]<='Z'){
			b++;
			d[i]+=32;
		}
		else if(a[i]>='a' && a[i]<='z'){
			c++;
			e[i]-=32;
		}
	}/*e=="ABCD"     d=="abcd"*/
	if(b>c){
		cout<<e;
	}
	else{
		cout<<d;
	}
}