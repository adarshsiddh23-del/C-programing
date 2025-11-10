#include<stdio.h>
int main()
{
    int A[100],n,i,j,flag;
    printf("enter array size");
    scanf("%d",&n);
    printf("enetr array elements");
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    printf("\n Array values BEFORE shorting \n");
    for(i=0;i<n;i++){
        printf("%d  %d\n", i,A[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-1-i;j++){
            if(A[j]>A[j+1]){
                flag=A[j];
                A[j]=A[j+1];
                A[j+1]=flag;

            }
        }
    }
    printf("\nArray values AFTER shorting\n");
    for(i=0;i<n;i++){
        printf("%d  %d\n",i,A[i]);
    }
    return 0;
}
