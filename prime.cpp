#include<bits/stdc++.h>
using namespace std;

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
       cout << "-1" << endl;
    }
    else
    {
         cout << "n is not a Prime number" << endl; 
    }
}

int main()
{
	int n;
	cin>>n;
	int a=prime(n);
	
}
