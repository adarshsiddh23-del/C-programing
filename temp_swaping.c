#include<stdio.h>
int main()
{
    int x,y,temp;
    printf("enter x and y values");
    scanf("%d%d",&x,&y);
    printf("before swapping=%d %d",x,y);
    temp=x;
    x=y;
    y=temp;
    printf("\n +98after swapping=%d %d",x,y);
    return 0;

}