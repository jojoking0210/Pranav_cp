#include<bits/stdc++.h>
using namespace std;

int main(){
   string s;
   cin>>s;
   int count=0;
   int len=s.length();
   for(int i=0;i<len;i++){
   	if(s[i]=='a'){
   	count++;
   }
   }
   
   if(count>len/2){
   	cout<<len;
   }
   else{
   	cout<<2*count-1;
   }
}
