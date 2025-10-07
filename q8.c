#include <stdio.h>
int main() {
    int a[5], i;
    long product = 1;
    printf("Enter 5 numbers: ");
    for(i=0;i<5;i++)
        scanf("%d", &a[i]);

    for(i=0;i<5;i++)
        product *= a[i];

    printf("Product = %ld", product);
    return 0;
}

