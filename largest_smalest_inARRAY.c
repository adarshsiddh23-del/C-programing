#include<stdio.h>
int main()
{
    int A[100],n,i,BIG,SMALL;
    printf("enter arrray size");
    scanf("%d",&n);                      
    printf("enter array element");                       
    for(i=0;i<n;i++){                           // taking array values from user
        scanf("%d",&A[i]);          
    }
    BIG=SMALL=A[0];                              // concept of LArgest and smallest 
    for(i=1;i<n;i++){
        if (SMALL>A[i]){
            SMALL=A[i];
        }
        else if(BIG<A[i]){
            BIG=A[i];
        }
    }
    printf(" BIG is=%d \n",BIG);
    printf(" SMALL is =%d",SMALL);
    return 0;

}