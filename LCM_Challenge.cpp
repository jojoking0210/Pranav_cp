#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    int result = min(a, b); // Find Minimum of a nd b
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
    return result; // return gcd of a nd b
}


int main()
{
	long long int n;
	cin>>n;
if(n==1){
	cout<<1;
}
else if(n==2){
	cout<<2;
}	
else if(n%2!=0){
	cout<<n*(n-1)*(n-2);
}
else if(gcd(n,(n-3))==1){
	cout<<n*(n-1)*(n-3);
}
else{
	cout<<(n-2)*(n-1)*(n-3);
}
return 0;
}
