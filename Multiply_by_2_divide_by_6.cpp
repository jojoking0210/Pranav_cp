#include<bits/stdc++.h>
using namespace std;

int divisor3(int n)
{
int count3=0;
while(n%3==0)
		{
			n=n/3;
			count3++;
		}
		return count3;	
}

int divisor2(int n)
{
int count2=0;
while(n%2==0)
		{
			n=n/2;
			count2++;
		}
		return count2;	
}


int prime(int n)
{
	int c;
	for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
           c++;
        }
    }
    if (c == 2)
    {
       return 1;
    }
    else
    {
        return 0;
    }
}
int main(){
	int t,count=0;
	cin>>t;
	while(t--)
	{
		cout<<endl;
		int n;
		cin>>n;
		int indof3=divisor3(n);
		int indof2=divisor2(n);
		
		int k;
		k=n/(pow(3,indof3)*pow(2,indof2));
		if(n==1)
		{
			cout<<"0";
		}
		else if(indof3<indof2 || indof3==0 || (indof3>=indof2 && k!=1))
		{
			cout<<"-1";
		}
	  else if(indof3>=indof2 && k==1)
		{
			cout<<((indof2)+2*(indof3-indof2));
		}
    }
}
