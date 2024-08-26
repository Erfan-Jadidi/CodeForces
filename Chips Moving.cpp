#include<bits/stdc++.h>
using namespace std;
#define migmig ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
	migmig;
	int a, even=0, odd=0;
	cin>>a;
	int b[a];
	for(int i=0;i<a;i++){
		cin>>b[i];
		if(b[i]%2==0){
			even++;
		}
		else{
			odd++;
		}
	}
	cout<<min(even, odd);

	return 0;
}
