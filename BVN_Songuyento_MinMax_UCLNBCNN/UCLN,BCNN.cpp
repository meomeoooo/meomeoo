#include<stdio.h>

int main (){
	int a ,b,tich;
	printf("nhap vao so a : ");
	scanf("%d",&a);
	printf("nhap vao so b: ");
	scanf("%d",&b);
	tich=a*b;
	while(a!=b){	
		if(a>b){	
		a=a-b;
	}else{
		b=b-a;
		}
	}
		printf("UCLN=%d\n",a);
		printf("BCNN= %d",tich/a);
}
