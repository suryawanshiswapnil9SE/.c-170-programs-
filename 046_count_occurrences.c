#include <stdio.h>
int main() {
    int n,i,x,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&x);
    for(i=0;i<n;i++) if(a[i]==x) c++;
    printf("%d",c);
    return 0;
}
