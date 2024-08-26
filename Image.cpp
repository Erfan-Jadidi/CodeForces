#include<bits/stdc++.h>
//09/02/23 00:21
using namespace std;
int main(){
	int a, c=0, num[4];
	cin>>a;
	int ans[a];
	char b[4];
	for(int i=0;i<a;i++){
		for(int j=0;j<4;j++){
			cin>>b[j];
			num[j]=int(b[j]);
		}
		sort(num, num+4);
		for(int j=0;j<3;j++){
			if(num[j]!=num[j+1]){
				c++;
			}
		}
		ans[i]=c;
		c=0;
	}
	for(int i=0;i<a;i++){
		cout<<ans[i]<<endl;
	}

}
	
