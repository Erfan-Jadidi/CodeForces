#include<iostream>
using namespace std;
int main(){
	int t, a, b, c ,d, e;
	cin>>t;
	while(t--){
		cin>>a>>b>>c>>d>>e;
		if(a*(b+c)<(d-e) or a*(b-c)>(d+e)){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}
}