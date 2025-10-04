#include <stdio.h>

int main() {
    int arr[100], n, i, key, flag=0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    printf("Enter element to search: ");
    scanf("%d", &key);
    for(i=0;i<n;i++){
        if(arr[i] == key){
            printf("%d found at position %d\n", key, i+1);
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("%d not found\n", key);
    return 0;
}
