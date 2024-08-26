#include<bits/stdc++.h>
using namespace std;
#define migmig ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
	migmig;
	long long int n, a, b, c, d, temp;
	cin>>n;
	while(n--){
		cin>>a>>b>>c>>d;
		if(a<=b){
			cout<<b<<endl;
		}
		else{
			if((c-d)>0){
				temp=(a-b)/(c-d);
				if((a-b)%(c-d)!=0){
					temp++;
				}
				cout<<temp*c+b<<endl;
			}
			else{
				cout<<"-1"<<endl;
			}
		}
	}

	return 0;
}
