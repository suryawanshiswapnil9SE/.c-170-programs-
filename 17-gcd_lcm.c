#include <stdio.h>

int main() {
    int a, b, i, gcd, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    for(i = 1; i <= a && i <= b; i++) {
        if(a % i == 0 && b % i == 0)
            gcd = i;
    }
    lcm = (a * b) / gcd;
    printf("GCD = %d, LCM = %d\n", gcd, lcm);
    return 0;
}
