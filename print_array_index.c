#include<stdio.h>
int main()
{
    int a[100],n,i;
    printf("enter array size");
    scanf("%d",&n);
    printf("eneter array values");
    for(i=0;i<n;i++){
        scanf("%d",&i[a]);
    }
    printf("\n display array values and index");
    for(i=0;i<n;i++){
        printf("\n%d %d %u",i,a[i],&a[i]);
    }
    return 0;
}