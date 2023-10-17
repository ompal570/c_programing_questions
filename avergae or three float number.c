#include<stdio.h>
void main(){
	float x,y,z;
	printf("enter the three float number:");
	scanf("%f%f%f",&x,&y,&z);
	
	float average=(x+y+z)/3;
	printf("average=%.1f ",average);
	
}
