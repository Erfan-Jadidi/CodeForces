#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define flash ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"

int main(){
	flash;
	int t, n, q;
	cin>>t;
	while(t--)
	{
		cin>>n>>q;
		int a[n], ans=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			ans+=a[i];
		}
		while(q--){
			int l, r, k, ans_2=0;
			cin>>l>>r>>k;
			for(int i=l-1;i<=r-1;i++)
			{
				ans_2+=a[i];
			}
//			cout<<"ans:"<<ans<<endl;
			if(k%2==0){
				if((ans-ans_2)%2==0){
					cout<<"NO"<<endl;
				}
				else{
					cout<<"YES"<<endl;
				}
			}
			else
			{
				
				if(((ans-ans_2)+(r-l+1))%2==0){
					cout<<"NO"<<endl;
				}
				else{
					cout<<"YES"<<endl;
				}
			}
		}
		
	}

	return 0;
}
