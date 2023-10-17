#include<stdio.h>
void main(){
	int x ,y, z;
	printf("enter principle amount,rate,time:");
	scanf("%d%d%d",&x,&y,&z);
	
	int SI=(x*y*z)/100;
	printf("simple interest %d ",SI);
	
}
