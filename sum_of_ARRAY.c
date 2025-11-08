#include<stdio.h>
int main()
{
    int a[100],n,i,sum;
    printf("enter array size");
    scanf("%d",&n);
    printf("eneter array values ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    printf("sum of array is=%d",sum );
    return 0;
}