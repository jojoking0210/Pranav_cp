#include<bits/stdc++.h>
#include<iostream>  
#include<cstdlib>  
using namespace std;
void sort(int [][2]);
int main(){
	long long int n,d,a,b,k,count=0,d2;
	cin>>n>>d;
	cin>>a>>b;
	long long int arr[n][2];
	for(long long int i=0;i<n;i++){
	{
			cin>>arr[i][0]>>arr[i][1];
		}
	}
	sort(arr);
	
	for(long long int i=0;i<n;i++){
	{
			cout<<arr[i][0]<<" "<<arr[i][1];
		}
	}
d2=d;
		for(long long int i=0;i<n;i++){
			k=a*arr[i][0]+b*arr[i][1];
			if((d2-k)>=0){
				count++;
				d2-=k;
			}
		}
		cout<<count<<endl;
		
	for(long long int i=0;i<n;i++){
			k=a*arr[i][0]+b*arr[i][1];
			if((d-k)>=0){
				d-=k;
				cout<<i+1<<" ";
			}
			
		}
		*/
}
void sort(int list[][2])  
{  
     int out,in,temp,temp2;  
       
       for(out=0;out<ROW-1;out++)  
       {  
        for(in=out+1;in<ROW;in++)  
        {  
         if(list[in][0]<list[out][0])  
         {   
          temp=list[out][0];  
          temp2=list[out][1];  
  
          list[out][0]=list[in][0];  
          list[out][1]=list[in][1];  
  
          list[in][0]=temp;  
          list[in][1]=temp2;  
         }                        
        }  
       }  
} 
