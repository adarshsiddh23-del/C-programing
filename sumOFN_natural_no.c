#include<stdio.h>
int main()
{
    int i,N,sum=0;
    printf("enter N values");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        sum=sum+i;
    }
    printf("sum of given Natural no is= %d",sum);
    return 0;

}