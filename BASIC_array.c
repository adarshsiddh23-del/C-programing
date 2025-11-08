#include<stdio.h>
int main()
{
    int X[100],n,i;
    printf("enetr  array size");
    scanf("%d",&n);
    printf("enetr array values");
    for(i=0;i<n;i++){
        scanf("%d",&X[i]);
    }
    printf("array values are ");
    for(i=0;i<n;i++){
           printf("%d",X[i]);
    }
    return 0;
}