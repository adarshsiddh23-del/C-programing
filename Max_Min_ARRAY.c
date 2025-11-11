#include<stdio.h>
int main()
{
    int A[100],n,i,Max,Min;
    printf("enter arrray size");
    scanf("%d",&n);                      
    printf("enter array element");                       
    for(i=0;i<n;i++){                           // taking array values from user
        scanf("%d",&A[i]);
    }
    Max=Min=A[0];                              // concept of  MAX and MIN 
    for(i=1;i<n;i++){
        if (Min>A[i]){
            Min=A[i];
        }
        else if(Max<A[i]){
            Max=A[i];
        }
    }
    printf(" MAX is=%d \n",Max);
    printf(" MIN is =%d",Min);
    return 0;

}