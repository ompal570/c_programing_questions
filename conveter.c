#include<stdio.h>
void main(){
	long x;
	printf("enter days: ");
	scanf("%ld",&x);
	 printf("convert specifid days into a year and months and days\n");
	
	long oneyear=365 ;
	long year=x/oneyear;
	printf("years=%ld ",year);
	
	long onemonths=12;
	long m=x%oneyear;
	long months=m/12;
	printf("months=%ld ",months);
	
	long days=m%12;
	printf("days=%ld ",days);
	
}
