#include<stdio.h>
void main()
{
	double a,b;
	printf("enter the first value: ");
	scanf("%lf",&a);
	printf("enter the second value: ");
	scanf("%lf",&b);
	
	a=a-b;
	b=a+b;
	a=b-a;
	printf("after the swapping ,a =%.1lf\n",a);
	printf("after the swapping,b=%.1lf",b);
	
}
