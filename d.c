#include<stdio.h>
int main(){
	int n;
	int i,j;
	
	int c;
	printf("enter the n value: ");
	scanf("%d",&n);
		for( i=1; i<=n; i++){
			for( j=1; j<=(n-i); j++){
				printf(" ");
			}
			for( c=1; c<=i; c++){
				printf("*");
			}
			printf("\n");
	}

}
