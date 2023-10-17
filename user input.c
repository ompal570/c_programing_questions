/*#include<stdio.h>
void main()
{
	int num1,num2;
	printf("input two numbers");
	scanf("%d %d",&num1,&num2);
	printf("%d+%d=%d",num1,num2,(num1+num2));
	
}*/


//#include<stdio.h>
//void main()
/*{
	float num1,num2;
	printf("input two numbers");
	scanf("%f %f",&num1,&num2);
	printf("%.0f+%.0f=%.0f",num1,num2,(num1+num2));
	
}*/
//wrp write a program to precentage

#include<stdio.h>

void main(){
	int total;
	float obtain;
	printf("enter total marks :");
	scanf("%d",&total);
	printf("enter obtain marks :");
	scanf("%f",&obtain);
	 printf("percentage =%.1f",(obtain*100)/total);
	
}

