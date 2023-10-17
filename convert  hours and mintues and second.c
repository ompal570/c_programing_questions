#include<stdio.h>
void main(){
	int x;
	printf("enter the intger number:");
	scanf("%d",&x);
	printf("convert to hours and minutes and second\n");
	
	int onehours=60;
	int hours=x/onehours;
	printf("hours=%d ",hours);
	
	int m=x%onehours;
	int minutes=m/60;
	printf("mintus=%d ",minutes);
	
	int seconds=m%60;
	printf("seconds=%d ",seconds);
	
	
}
