#include <stdio.h>
int main(){ int n,a=0,b=1,c,i; scanf("%d",&n); if(n==0){ printf("0"); return 0; } for(i=2;i<=n;i++){ c=a+b; a=b; b=c; } printf("%d",b); return 0; }
