#include<iostream>
using namespace std;
int main(){
	int a, room[10], end=9, start=0, l=0, r=0;
	cin>>a;
	string b;
	cin>>b;
	for(int i=0;i<10;i++){
		room[i]=0;
	}
	for(int i=0;i<a-1;i++){
		if(b[i]=='L'){
			l++;
		}
		else if(b[i]=='R'){
			r++;
		}
		else{
			if(b[i]-'0'>=5){
				r--;
			}
			else if(b[i]-'0'<5){
				l--;
			}
		}
	}
//	cout<<l<<"-->"<<r<<endl;
	for(int i=0;i<l;i++){
		room[i]=1;
	}
	for(int i=9;i>=9-r+1;i--){
		room[i]=1;
	}
	
	if(b[a-1]=='L'){
		room[l]=1;
	}
	
	else if(b[a-1]=='R'){
		room[a-(r+1)]=1;
	}
	
	else{
		room[b[a-1]-'0']=0;
	}
	
	for(int j=0;j<10;j++){
		cout<<room[j];
	}
}