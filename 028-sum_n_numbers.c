#include <stdio.h>

int main() {
    int n, sum = 0, i;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
        sum += i;
    printf("Sum of first %d numbers = %d\n", n, sum);
    return 0;
}
