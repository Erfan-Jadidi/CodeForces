#include<iostream>
using namespace std;
int main(){
	int a, b, c, count=0;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b>>c;
		count=-1;
		int d[b-1], e=0;
		for(int j=c+1;j<=b;j++){
			count++;
			d[count]=j;
		}
		if((c)%2==1){
			e=(c)/2+1;
		}
		else{
			e=(c)/2;
		}
		for(int j=e;j<c;j++){
			count++;
			d[count]=j;
		}
		cout<<count+1<<endl;
		for(int j=0;j<=count;j++){
			cout<<d[j]<<" ";
		}
		cout<<endl;
	}
}