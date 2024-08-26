#include<iostream>
using namespace std;
int main(){
	int a, b, c[4], bob=0, alice=0, count=0;
	cin>>a;
	int ans[a];
	for(int i=0;i<a;i++){
		for(int j=0;j<4;j++){
			cin>>c[j];
		}			
		bob+=c[0];alice+=c[0];
		count+=c[0];
		while((bob>0 or alice>0) && (c[1]!=0 and c[2]!=0)){
			if(c[2]>=alice && alice!=0){
				count+=alice;
				bob+=alice;
				c[2]-=alice;
				alice=0;
			}
			else if(c[2]<alice && alice!=0){
				count+=c[2];
				bob+=c[2];
				alice-=c[2];
				c[2]=0;
			}
			else if(c[1]>=bob && bob!=0){
				count+=bob;
				alice+= bob;
				c[1]-=bob;
				bob=0;
			}
			else if(c[1]<bob && bob!=0){
				count+=c[1];
				alice+=c[1];
				bob-=c[1];
				c[1]=0;
			}
		}
		while(bob>=0 && alice>=0 && c[3]>0){
			bob--;alice--;
			c[3]--;
			count++;
		}
		ans[i]=count;
		bob=0;alice=0;count=0;
	}
	for(int i=0;i<a;i++){
		cout<<ans[i]<<endl;
	}
}