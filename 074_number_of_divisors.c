#include <stdio.h>
int main(){ int n; scanf("%d",&n); int count=0,i; for(i=1;i<=n;i++) if(n%i==0) count++; printf("%d",count); return 0; }
