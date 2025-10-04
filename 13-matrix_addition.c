#include <stdio.h>

int main() {
    int a[10][10], b[10][10], sum[10][10], i, j, m, n;
    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);
    printf("Enter first matrix:\n");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d", &a[i][j]);
    printf("Enter second matrix:\n");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d", &b[i][j]);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            sum[i][j] = a[i][j] + b[i][j];
    printf("Sum matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }
    return 0;
}
