#include <stdio.h>

int main() {
    int a ;
    int b ;
    int sum;

    sum = a + b;
    printf("Sum: %d\n", sum);

    printf("Enter value for a: ");
    scanf("%d", &a);

    printf("Enter value for b: ");
    scanf("%d", &b);

    sum = a + b;
    printf("New sum: %d\n", sum);

    return 0;
}
