#include<stdio.h>

int main(){
	int i,n,s,k1,k2,k3,k4,max1,min1,max2,min2;
	printf("Enter length of array");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		}
		
	max1=a[0];
	for(i=0;i<n;i++){
		if(a[i]>=max1){
		max1=a[i];
		k1=i;
		}	
	}
	
//printf("%d %d",max1,k1);
max2=a[0];
for(i=0;i<n;i++){
	if(a[i]>=max2 && i!=k1){
		max2=a[i];
		k2=i;
		}	
}//printf("\n%d %d ",max2,k2);
	min1=max1;	
for(i=0;i<n;i++){
	if(a[i]<=min1){
		min1=a[i];
		k3=i;
		}	
}
//	printf("\n%d %d ",min1,k3);
	min2=max1;
for(i=0;i<n;i++){
	if(a[i]<=min2 && i!=k3){
		min2=a[i];
		k4=i;
		}	
}	//printf("\n%d %d ",min2,k4);				
	s=max1-min1+max2-min2;
	printf("%d",s);
}
