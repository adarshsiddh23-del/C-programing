#include<stdio.h> 
int main()
{
    int X;
    printf("enter X value");
    scanf("%d",&X);
    switch(X%2==0){
        case 1:
              printf("X is even");
              break;
        case 0:
              printf("X is odd");
            break;  
        default:
              printf("invalid");  
   }
   return 0;
}   
