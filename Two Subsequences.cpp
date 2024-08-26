#include<iostream>
using namespace std;
int main(){
	int a, best=100, w=-1;
	string b;
	cin>>a;
	while(a--){
		cin>>b;best=123;w=-1;
		for(int i=0;i<b.length();i++){
			if(int(b[i])<best){
				best=int(b[i]);
				w=i;
			}
		}
		cout<<char(best)<<" ";
		for(int i=0;i<b.length();i++){
			if(i!=w){
				cout<<b[i];
			}
		}
		cout<<endl;
	}
}