#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	cin>>a;
	int b;
	b=a.length();
	int c[b], d=1, sum=0;
	for(int i=0;i<b;i++){
		c[i]=int(a[i])-96;
	}
//	for(int i=0;i<b;i++){
//		cout<<c[i]<<"..";
//	}
//	cout<<endl;
	for(int i=0;i<b;i++){
		if(d<=13){
			if(abs(c[i]-d)<=13){
				sum+=abs(c[i]-d);
			}
			else{
				sum+=(d-1)+(abs(26-c[i])+1);
			}
		}
		else if(d>13){
			if(abs(c[i]-d)<=13){
				sum+=abs(c[i]-d);
			}
			else{
				sum+=(26-d)+(c[i]);
			}
		}
		d=c[i];
	}
	cout<<sum;
}