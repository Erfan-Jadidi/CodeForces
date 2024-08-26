#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b, c, temp=0, sum=0, temp_1=0;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b>>c;temp=0;sum=0;temp_1=0;
		int d[b];
		for(int j=0;j<b;j++){
			cin>>d[j];
		}
		sort(d, d+b);
		temp=d[b-1];
		temp_1=d[b-1];
		temp*=(temp+1);temp/=2;
		for(int j=0;j<b;j++){
			sum+=d[j];
		}
		sum=temp-sum;
		if(sum==c){
			cout<<"YES"<<endl;
		}
		else if(sum>c){
			cout<<"NO"<<endl;
		}
		else{
			c-=sum;
			sum=0;
			for(int j=temp_1+1;true;j++){
				sum+=j;
				if(sum==c){
					cout<<"YES"<<endl;
					break;
				}
				else if(sum>c){
					cout<<"NO"<<endl;
					break;
				}
			}
		}
	}
}