#include <stdio.h>
int main() {
    int n,i,x;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&x);
    int l=0,r=n-1;
    while(l<=r){
        int m=(l+r)/2;
        if(a[m]==x){ printf("Found"); return 0; }
        else if(a[m]<x) l=m+1;
        else r=m-1;
    }
    printf("Not Found");
    return 0;
}
