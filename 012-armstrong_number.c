#include <stdio.h>
#include <math.h>

int main() {
    int n, original, rem, sum = 0, digits = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    int temp = n;
    while(temp != 0) {
        temp /= 10;
        digits++;
    }
    temp = n;
    while(temp != 0) {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }
    if(sum == original)
        printf("%d is an Armstrong number\n", original);
    else
        printf("%d is not an Armstrong number\n", original);
    return 0;
}
