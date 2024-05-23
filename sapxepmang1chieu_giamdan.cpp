#include<stdio.h>
int main () {
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	int arr[n];
	printf("Nhap vao phan tu trong mang\n");
	for(int i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			if (arr[i] < arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for(int i=n-1; i>=0; i--) {
		printf("%d\n", arr[i]);
	}
	printf("Gia tri lon nhat trong mang la:%d\n", arr[n-1]);
	printf("Gia tri nho nhat trong mang la:%d", arr[0]);
	return 0;
}
