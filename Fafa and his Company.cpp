#include<iostream>
using namespace std;
int main(){
	int a, b=0, c=0;
	cin>>a;
	for(int i=1;i<(a/2)+1;i++){
		b=a-i;
		if(b%i==0){
			c++;
		}
	}
	cout<<c;
}