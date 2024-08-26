#include<iostream>
using namespace std;
int main(){
	int a, b, c, d, e, f, g, h=0, x, i=0;
	cin>>x;
	int k[x];
	/*
	 a=tool  b=arz  c=ertefah
	             d, e = laptop   f, g = projector
	*/
	for(int i=0;i<x;i++){
		cin>>a>>b>>c;
		cin>>d>>e>>f>>g;
		if(d>=f){
			if((d-f)>d){
				h+=d;
				goto jump;
			}
			else if((d-f)>(a-d)){
				h+=(a-d);
				goto jump;
			}
			else{
				h+=(d-f);
			}
		}
		else{
			if((f-d)>d){
				h+=d;
				goto jump;
			}
			else if((f-d)>(a-d)){
				h+=(a-d);
				goto jump;
			}
			else{
				h+=(f-d);
			}
		}
		
		
		
		if(e>(b-e)){
			h+=(b-e);
		}
		else if(e==(b-e)){
			if(g>=(b-c)){
				h+=(b-e);
			}
			else{
				h+=e;
			}
		}
		else{
			h+=e;
		}
		jump:;
		h+=c;
		h+=g;
		k[i]=h;
		h=0;
	}
	for(int i=0;i<x;i++){
		cout<<k[i]<<endl;
	}
}