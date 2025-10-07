#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};  
    int n = sizeof(arr) / sizeof(arr[0]);  
    int sum = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {  
            sum += arr[i];
        }
    }

    printf("Sum of even elements: %d\n", sum);

    return 0;
}

