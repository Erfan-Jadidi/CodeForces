#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, sum=1, count=0;
	cin>>a;
	int b[a], c[a];
	for(int i=0;i<a;i++){
		c[i]=0;
	}
	for(int i=0;i<a;i++){
		cin>>b[i];
	}
	for(int i=0;i<a-1;i++){
		if(b[i]<b[i+1]){
			sum++;
		}
		else{
			c[count]=sum;
			sum=1;count++;
		}
	}
	c[count]=sum;
	
//	for(int i=0;i<a;i++){
//		cout<<c[i]<<" ";
//	}
	sort(c, c+a);
//	cout<<endl;
	cout<<c[a-1];
}