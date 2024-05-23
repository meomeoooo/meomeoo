#include<stdio.h>
int main() {
	int n;
	printf("Nhap so phan tu cua mang : ");
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++) {
	   scanf("%d", &a[i]);
	} 
	for(int i=0; i<n; i++) {
     	printf("%d ", a[i]);
    }
    printf("\n");
    for(int i= n-1; i>=0; i--){
    	printf("%d ", a[i]);
    }
    return 0;
    }
