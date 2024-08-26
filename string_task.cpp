#include<iostream>
using namespace std;
int main(){
	string a;
	char b[200];
	int c=0, d=0;
	cin>>a;

	for(int i=0;i<a.length();i++){
		d=int(a[i]);
		if(d>=97 and d<=122){
			if((d==97) || (d==101) || (d==105) || (d==111) || (d==117) || (d==121)){
				a.erase(i, 1);
				i--;
			}
//			if((d!=97) && (d!=101) && (d!=105) && (d!=111) && (d!=117) && (d!=121)){
//				b[c]='.';
//				b[c+1]=a[i];
//				c+=2;
//			}
		}
		else if(d>=65 and d<=90){
			if((d==65) || (d==69) || (d==73) || (d==79) || (d==85) || (d==89)){
				a.erase(i, 1);
				i--;
			}
			else{
				a[i]+=32;
			}
//			if((d!=65) && (d!=69) && (d!=73) && (d!=79) && (d!=85) && (d!=89)){	
//				b[c]='.';
//				b[c+1]=a[i]+32;
//				c+=2;
//			}
		}
	}
	
	for(int i=0;i<a.length();i++){
		cout<<"."<<a[i];
	}
//	for(int i=0;i<c;i++){
//		cout<<b[i];
//	}
}