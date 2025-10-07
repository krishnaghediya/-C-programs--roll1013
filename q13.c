
#include <stdio.h>
int main() {
    int n, i, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n/2; i++) {
        if(i * i == n) {
            flag = 1;
            break;
        }
    }

    if(flag == 1 || n == 0 || n == 1)
        printf("Perfect Square");
    else
     
   printf("Not a Perfect Square");
    return 0;
    }

