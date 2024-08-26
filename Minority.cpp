#include<iostream>
using namespace std;
int main(){
	int b, e=0, f=0;
	cin>>b;
	string a;
	int c[b];
	for(int j=0;j<b;j++){
		cin>>a;
		e=0;
		f=0;
		for(int i=0;i<a.length();i++){
			if(a[i]=='0'){
				f++;
			}
			else{
				e++;
			}
		}
		if(f!=e){
			c[j]=min(f, e);
		}	
		else{
			c[j]=(f-1);
		}
	}
	for(int i=0;i<b;i++){
		cout<<c[i]<<endl;
	}
	
}