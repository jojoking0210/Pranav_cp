#include<bits/stdc++.h>
using namespace std;

int palindrome(int r,int g,int b,int w){
	 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
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
//if palindrome it will return 1

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
	int t;
	cin>>t;
	while(t--)
	{
		int count=0;
		int r,g,b,w;
		cin>>r>>g>>b>>w;

while(r!=0 && b!=0 && g!=0)	{
		if(palindrome(r,g,b,w))
		{
		count++;
		break;
		}
		else
		{
		r=r-1;
		g=g-1;
		b=b-1;
		w=w+3;
        }
	}

	if(count>0){
	cout<<"Yes"<<endl;
		}
		else if(palindrome(r,g,b,w)){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}

}
return 0;
}
