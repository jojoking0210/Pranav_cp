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
		long long int arr[n];
		for(long long int i=0;i<n;i++){
			cin>>arr[i];
		}
		long long int sum=0;
			for(long long int i=0;i<n;i++){
			sum=sum+arr[i];

		}
		if(sum>=0)
	cout<<sum<<endl;
	else{
		cout<<-sum<<endl;
	}	
	}
}
