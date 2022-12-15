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
	for(int i=l;i<=r;i++){
		for(int j=i;j<=r;j++){
			
			if(j>i && lcm(i,j)<=r && lcm(i,j)>=l){
				x=i;
				y=j;
				count++;
			}
			
		}
	}
	
if(count>0)	{
cout<<x<<" "<<y<<endl;	
}
else{
	cout<<-1<<" "<<-1<<endl;
}
}
return 0;
} 


