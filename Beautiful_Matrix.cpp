#include<bits/stdc++.h>
using namespace std;

int main(){
	
int a[5][5];
for(int i=0;i<5;i++){
	cin>>a[i][0]>>a[i][1]>>a[i][2]>>a[i][3]>>a[i][4];
}

for(int i=0;i<5;i++){
for(int j=0;j<5;j++){
	
	if(a[i][j]==1 && ((abs(i-j)>=2) ||(i==2 || j==2))){
		cout<<(abs(i-2)+abs(j-2));
		
	}
}
}

//if(a[0][0]==1 || a[4][4]==1 || a[4][0]==1 || a[0][4]==1){
//	cout<<4;
//}
//else if(a[0][1]==1 || a[1][0]==1 ||a[3][4]==1 || a[4][3]==1 || a[4][1]==1|| a[3][0]==1|| a[1][4]==1|| a[0][3]==1){
//	cout<<3;
//}
//else if(a[1][2]==1 || a[2][1]==2|| a[2][3]==1|| a[3][2]==1){
//	cout<<1;
//}
//else if(a[2][2]==1){
//	cout<<0;
//}
//else{
//	cout<<2;
//}
return 0;
} 


