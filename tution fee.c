//wap a program to input your tuttion fee of collagr and calculate total fee

#include<stdio.h>
void main(){
	int x;
	printf("enter the tution fee of collage:");
	scanf("%d",&x);
	
	int exam=(2*x)/100;
	printf("exam fee=%d\n",exam);
	
    int h=(5*x)/100;
	printf("hostel  fee=%d\n",h);
	
	int e=(10*x)/100;
	printf("employee empowement fee=%d\n",e);
	
	
	int t=exam+x+h+e+10000;
	printf("total fee=%d",t);
	
}
