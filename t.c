#include<stdio.h>
int main(){
	int n;
	int i,s,j;
	printf("enter the rows:");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++){
		for(s=1; s<=(n-i); s++){
			printf(" ");
		}
		for(j=1; j<=i; j++){
			printf("* ");
		}
		printf("\n");
	}
	
}
