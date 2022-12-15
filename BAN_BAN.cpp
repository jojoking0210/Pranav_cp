#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
        

	long long int t,n;
	cin>>t;
	
	while(t--){
		cin>>n;
	if(n==1){
		cout<<1<<endl;	
		cout<<1<<" "<<2<<endl;
}
else{
	cout<<n-1<<endl;
	for(long long int i=1;i<=n-1;i++){
		cout<<3*i<<" "<<3*i+1<<endl;
		}
	}
}
	
}
