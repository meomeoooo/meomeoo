#include<stdio.h>


int main(){
	int n ,a[n];
	do{
		printf("nhap n : ");
		scanf("%d",&n);
		if(n<=0){
		printf("nhap lai!!\n");
		}
	}while(n<=0);
	for(int i=1 ;i<=n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	int max,min;
	max=a[1];
	for(int i=1 ;i<=n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	printf("gia tri lon nhat la : %d\n",max);
	min=a[1];
	for(int i=1 ;i<=n;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	printf("gia tri nho nhat la : %d",min);
}
