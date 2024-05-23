#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("Nhap cac phan tu trong mang\n ");
    int a[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    int maxValue = a[0];
    for(int i=0; i<n; i++) {
        if(a[i] > maxValue) {
            maxValue = a[i];
        }
    }
    printf("%d", maxValue);
    return 0;
}

