#include <stdio.h>

int main() {
    int n, original, rev = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while(n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    if(original == rev)
        printf("%d is a palindrome\n", original);
    else
        printf("%d is not a palindrome\n", original);
    return 0;
}
