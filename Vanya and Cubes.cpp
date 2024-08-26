#include<iostream>
using namespace std;
int main(){
	int a, ans=0, temp=0, counter=1;
	cin>>a;
	while(ans<=a){
		temp+=counter;
		counter++;
		ans+=temp;
	}
	cout<<counter-2;
}