#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m,s;
	cin>>m>>s;
	int a[m];
	for(int i=0;i<m;i++)
	{
		if(s>=9)
		{
		a[i]=9;
		s=s-9;
		}
		else{
			a[i]=s;
			s=0;
		}
	}
	for(int i=0;i<m;i++)
	{
		cout<<a[i];
	}
	
	
	//for min number
	int a2[m];
//	
		a2[0]=1;
		for(int i=0;i<m;i++)
	{
		a2[i]=0;
	}
	a2[2]=3;
//i-->0 to m-1
//if(s>=9*i+2 && s<=9*i+1)
if(s>1)
{
	for(int i=m-1;i>=((s-1)/9);i--)
	{
	for(int j=1;j<=(s-1)%9;j++)
	{
		a2[i]=j;
	}
		
	}
}
	
		for(int i=0;i<m;i++)
	{
//		cout<<a2[i];
	}
	
	
}
