#include<iostream>
using namespace std;
int main(){
	int a, ans;
	cin>>a;
	char b[8][8], temp;
	while(a--){
		bool x=1;
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
				cin>>b[i][j];
			}
		}
		for(int i=0;i<8;i++){
			ans=0;
			if(b[0][i]=='B'){
				temp=b[0][i];
				for(int j=0;j<8;j++){
					if(temp==b[j][i]){
						ans++;
					}
					else{
						break;
					} 
				}
			}
			if(ans==8){
				cout<<temp<<endl;x=0;
				goto end;
			}
		}
		end:
			if(x){
				cout<<"R"<<endl;
			}
		;
	}
}