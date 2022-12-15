#include<bits/stdc++.h>
using namespace std;
int lcm(int a,int b){
	int res;
	res=(a*b)/__gcd(a,b);
	return res;
}

int main(){
int t;
cin>>t;
while(t--){
	int l,r;
	cin>>l>>r;
	int x,y,count=0;
if(r%2==0)
{
	y=r;
	x=r/2;
}
else {
	y=r-1;
	x=(r-1)/2;
}
if(x>=l)	{
cout<<x<<" "<<y<<endl;	
}
else{
	cout<<-1<<" "<<-1<<endl;
}
}
return 0;
} 


