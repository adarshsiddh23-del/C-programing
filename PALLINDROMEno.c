#include<stdio.h>
int main()
{
    int n,d,rev=0,temp;
    printf("enter any no");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    if(rev==temp)
       printf("it is a PALLINDROME no");
    else
    printf("NOT a PALLINDROME no");
    return 0;


}