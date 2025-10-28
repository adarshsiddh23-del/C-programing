#include<stdio.h>
#include<math.h>
int main()
{
    int p,r,t,CI;
    printf("enter p,t,r values");
    scanf("%d%d%d",&p,&r,&t);
    CI=p*(pow(1+r/100,t)-t);
    printf("compound interst=%d",CI);
    return 0;

}