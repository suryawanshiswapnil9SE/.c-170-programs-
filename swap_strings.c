#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50], temp[50];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
    printf("After swapping: str1 = %s, str2 = %s\n", str1, str2);
    return 0;
}
