#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b;
	cin>>a;
	while(a--){
		cin>>b;
		int c[b], d[b], sum_1=0, sum_2=0, temp_1=0, temp_2=0, ans=0;
		for(int i=0;i<b;i++){
			cin>>c[i];
			sum_1+=c[i];
		}
		for(int i=0;i<b;i++){
			cin>>d[i];
			sum_2+=d[i];
		}
		if(sum_1==sum_2){
			pair<int, int> result[sum_1]={};
			int count=0;
			for(int i=0;i<b;i++){
				temp_1=0;temp_2=0;
				if(c[i]>d[i]){
					temp_1=c[i]-d[i];
					for(int j=0;j<b;j++){
						if(c[j]<d[j]){
							temp_2=d[j]-c[j];
							if(temp_1>temp_2){
								c[j]+=temp_2;
								c[i]-=temp_2;
								for(int k=0;k<temp_2;k++){
									result[count].first=i+1;
									result[count].second=j+1;
									count++;
									ans++;
								}
								temp_1-=temp_2;
							}
							else{
								c[j]+=temp_1;
								c[i]-=temp_1;
								for(int k=0;k<temp_1;k++){
									result[count].first=i+1;
									result[count].second=j+1;
									count++;
									ans++;
								}
								break;
							}
						}
					}
				}
			}
			cout<<ans<<endl;
			for(int i=0;i<sum_1;i++){
				if(result[i].first!=0 and result[i].second!=0){
					cout<<result[i].first<<" "<<result[i].second<<endl;
				}
			}
		}
		else{
			cout<<"-1"<<endl;
		}
	}
}