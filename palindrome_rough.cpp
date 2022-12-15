#include<bits/stdc++.h>
using namespace std;
int palindrome(int r,int g,int b,int w){
	int cr=0,cg=0,cb=0,cw=0;
	if(r%2==1){
		cr=1;
	}
	if(g%2==1){
		cg=1;
	}
	if(b%2==1){
		cb=1;
	}
	if(w%2==1){
		cw=1;
	}
	
	if(cr+cg+cb+cw==0 || cr+cg+cb+cw==1){
		return 1;
	}
	else{
	return 0;
	}
}
int main()
{int r,g,b,w;
		cin>>r>>g>>b>>w;
	if(palindrome(r,g,b,w)){
			cout<<"Yes";
		}
		else{
			cout<<"No";
		}
}
