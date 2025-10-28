#include<stdio.h>
int main()
{
    int a,b ,c;
    char  '+','-','*','/','%';
    printf("enter a and b values");
    scanf("%d%d",&a,&b);
    printf("Enter Your Choice + ADD\n - SUBSTRACTION\n * MULTIPLICATION\n / DIVISON0\n % modulo\n" );
    scanf("%c",ch);
    switch (ch){
        case '+': c=a+b;
              printf("addition=%d",c);
        case '-': c=a-b;
            printf("substraction =%d",c);
        case '*': c=a*b;
            printf("divison =%d",c);
        case '/': c=a/b;
           printf("divison =%d",c);
        case '%': c=a%b;
           printf("modulo = %d",c);
        default :
             printf("Invalid CHOICE ");     
    }
    return 0;
}