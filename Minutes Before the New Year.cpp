#include<iostream>
using namespace std;
int main(){
	int a, h, m, temp;
	cin>>a;
	while(a--){
		cin>>h>>m;
		h=23-h;
		m=60-m;
		temp=(h*60)+m;
		cout<<temp<<endl;
	}
}