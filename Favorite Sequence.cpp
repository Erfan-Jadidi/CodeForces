#include<iostream>
using namespace std;
int main(){
	int a, b, count_start=0, count_end=0;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b;
		count_end=b-1;
		count_start=0;
		int c[b], d[b];
		for(int j=0;j<b;j++){
			cin>>c[j];
		}
		for(int j=0;j<b;j+=2){
			d[j]=c[count_start];
			if(j+1<=b-1){
				d[j+1]=c[count_end];
			}
			count_start++;
			count_end--;
		}
		for(int j=0;j<b;j++){
			cout<<d[j]<<" ";
		}
		cout<<endl;
	}
}