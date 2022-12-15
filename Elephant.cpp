#include<bits/stdc++.h>
using namespace std;

int main(){
int x,t;
cin>>x;
for(int i=5;i>0;i--){
	if(x%i==0){
	cout<<x/i;
	t=1;
}
if(t==1){
	break;
}
}
return 0;
} 


