#include<iostream>
using namespace std;
int main(){
	int a, c=0, d=0, temp=0, f=0;
	cin>>a;
	for(int i=1;i<=a;i++){
		f=0;d=0;
		cin>>c;
		int b[c];
		for(int j=0;j<c;j++){
			cin>>b[j];
		}
		again:	
			d=b[0];
			for(int j=1;j<c;j++){
				if(b[j]==d){
					if(f!=c){
						temp=b[j-1];
						b[j-1]=b[j];
						b[j]=temp;
						f++;
						goto again;
					}
					else{
						cout<<"NO"<<endl;
						goto end;
					}
				}
				d+=b[j];
			};
		cout<<"YES"<<endl;
		for(int j=0;j<c;j++){
			cout<<b[j]<<" ";
		}
		cout<<endl;
		end:;
	}
}