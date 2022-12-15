#include<bits/stdc++.h>
using namespace std;

int main(){
	double m,n;
	int num,sum=0,min,i;
	cin>>m>>n;
	for(i=pow(10,m-1);i<pow(10,m);i++){
	    num=i;
	   while(m)
	   { 
	   sum=sum+num%10;
	   num=num/10;
	   m--;
	   }
	    if(sum==n){
	        min==i;
	    }
	      cout<<i<<endl;
	}
	
return 0;	
}
