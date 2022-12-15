#include<iostream>
using namespace std;


int main(){
	int n,k;
	cin>>n>>k;
	int arr[n];
	int q[k];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
		for(int i=0;i<n;i++){
		cin>>q[i];
	}
for(int i=0;i<n;i++){
	int j=0;
	while(arr[j]<q[i]){
		j++;
	}
	if(j!=n)
	cout<<j+1<<endl;
	else{
	
	cout<<n+1<<endl;
}
}
5 5
3 3 5 8 9
2 4 8 1 10


return 0;	
}
