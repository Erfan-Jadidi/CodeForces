#include<iostream>
using namespace std;
int main(){
	int a, b, fard=0, zoj=0;
	cin>>a;
	int d[a];
	for(int i=0;i<a;i++){
		cin>>b;
		int c[2*b];
		for(int j=0;j<2*b;j++){
			cin>>c[j];
			if(c[j]%2==0){
				zoj++;
			}
			else{
				fard++;
			}
		}
		if(zoj==fard){
			d[i]=1;
		}
		else{
			d[i]=0;
		}
		zoj=0;fard=0;
	}
	for(int i=0;i<a;i++){
		if(d[i]==1){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
}