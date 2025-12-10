#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int max=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("max in %d %d %d = %d",a,b,c,max);
    return 0;
}
