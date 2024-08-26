#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int a[5][5], b=0, c=0;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>a[i][j];
			if(a[i][j]==1){
				b=i;
				c=j;	
			}
		}
	}
	//cout<<b<<endl<<c<<endl;
	cout<<abs(2-b)+abs(c-2);
}
/*
	0 0 0 0 0
	0 0 0 0 0
	0 0 0 0 0
	0 0 0 0 0
	0 0 0 1 0	
*/