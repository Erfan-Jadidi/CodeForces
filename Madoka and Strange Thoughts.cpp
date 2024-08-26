#include<iostream>
using namespace std;
int main(){
	int a, b, temp;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b;
		temp=b+2*((b/2)+(b/3));
		cout<<temp<<endl;
	}
}