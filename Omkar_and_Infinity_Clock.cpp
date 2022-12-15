#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n,k;
		cin>>n>>k;
		long long int arr[n];
		for(long long int i=0;i<n;i++){
			cin>>arr[i];
		}
		long long int max=*max_element(arr,arr+n);
		long long int min=*min_element(arr,arr+n);
		for(long long int i=0;i<n;i++){
			if(k%2!=0){
				arr[i]=max-arr[i];
			}
			else{
				arr[i]=arr[i]-min;
			}
		}
		for(long long int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
	}
}
