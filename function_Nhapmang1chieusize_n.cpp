#include<stdio.h>
// Nhap vao mot mang
void Input (int arr[], int n) {
	for (int i=0; i<n; i++) {
		printf("Nhap vao phan tu thu %d", i+1);
		scanf("%d", &arr[i]);
	}
}
int main () {
	Input();
	return 0;
}

