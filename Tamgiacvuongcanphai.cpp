#include<stdio.h>
int main (){
	int a,b,c;
	printf("Do dai canh: \n");
	scanf("%d",&a);
	for(b=1; b<=a; b++){
	for(c=1; c<=a-b;c++)
			printf("  ");
    for (c=1;c<=b;c++)
	printf(" *");
	printf("\n");
	
	}return 0;
	}
