#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"

int main(){
	flash;
	int t, a;
	cin>>t;
	while(t--){
		cin>>a;
		string s="";
		if(a%2==0){
			cout<<"YES"<<endl;
			for(int i=0;i<a/2;i++){
				s+="1 -1 ";
			}
			cout<<s<<endl;
		}
		else if(a%2==1 && a>=5){
			cout<<"YES"<<endl;
			for(int i=0;i<a;i++)
			{
				if(i%2==0)
				{
					s+=to_string(a/2-1)+" ";
				}
				else
				{
					s+="-"+to_string(a/2)+" ";
				}
			}
			cout<<s<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}
