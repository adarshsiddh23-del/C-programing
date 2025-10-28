#include<stdio.h>
int main()
{
    int x,y,z;
    printf("printf enter x,y,z values");
    scanf("%d%d%d",&x,&y,&z);
    int N =(z-y)/x;
    printf("no of mangoes =%d",N);
    return 0;
}