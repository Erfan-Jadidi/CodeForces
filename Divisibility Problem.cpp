#include<iostream>
using namespace std;
int main(){
	int a, b, c, e=0;
	cin>>a;
	int d[a];
	for(int i=0;i<a;i++){
		e=0;
		cin>>b>>c;
		if(b<c){
			d[i]=c-b;
		}
		else if(b==c or b%c==0){
			d[i]=0;
		}
		else{
			e=b/c;
			d[i]=(c*(e+1))-b;
		}
	}
	for(int i=0;i<a;i++){
		cout<<d[i]<<endl;
	}
}