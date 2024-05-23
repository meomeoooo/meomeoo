#include <stdio.h>

int main() {
    int n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu trong mang\n");
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int max_value = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i] > max_value) {
            max_value = a[i];
        }
    }
    int min_value = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i] < min_value) {
            min_value = a[i];
        }
    }

    printf("Gia tri lon nhat trong mang la: %d\n", max_value);
    printf("Gia tri nhóm nhat trong mang la: %d\n", min_value);
    
    return 0;
}
