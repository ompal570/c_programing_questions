//wap a program to input a number odd or even

#include<stdio.h>
void main(){
	int x;
	printf("enter a number:");
	scanf("%d",&x);
	if(x%2==0){
		printf("even number ");
	}else{
		printf("odd number ");
	}
}
