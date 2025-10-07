#include <stdio.h>
int main() 
{
    int n, temp, rem, digits = 0, i, pow, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while(temp){ digits++; temp /= 10; }
    temp = n;
    while(temp){
        rem = temp % 10;
        pow = 1;
        for(i = 0; i < digits; i++) pow *= rem;
        sum += pow;
        temp /= 10;
    }
    printf(sum == n ? "Armstrong Number" : "Not an Armstrong Number");
    return 0;
}

