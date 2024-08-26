#include<bits/stdc++.h>
using namespace std;
#define migmig ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
	migmig;
	double a, b, c, d, e;
	long long int s_1, s_2;
	cin>>a;
	while(a--){
		cin>>b>>c>>d>>e;
		s_1=to_string(int(b)).length();
		s_2=to_string(int(d)).length();
//		cout<<s_1<<"-->"<<s_2<<endl;
//		cout<<c<<"-->"<<e<<endl;
		if(s_1>1){
			b/=pow(10, s_1-1);
			c+=s_1-1;
		}
		if(s_2>1){
			d/=pow(10, s_2-1);
			e+=s_2-1;
		}
//		cout<<b<<"-->"<<d<<endl;
//		cout<<c<<"<-->"<<e<<endl<<"--------"<<endl;
		if(c>e){
			cout<<">"<<endl;
		}
		else if(c<e){
			cout<<"<"<<endl;
		}
		else{
			if(b>d){
				cout<<">"<<endl;
			}
			else if(b<d){
				cout<<"<"<<endl;
			}
			else{
				cout<<"="<<endl;
			}
		}
	}
	return 0;
}
