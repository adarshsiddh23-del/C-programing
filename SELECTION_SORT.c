#include<stdio.h>
int main()
{
    int A[100],n,i,j,temp;
    printf("enter Array size");
    scanf("%d",&n);

    printf("Enter Array values");
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }

    printf("Array Before sorting \n");
     printf("INDEX  VALUES \n");
    for(i=0;i<n;i++){
        printf("%d ----- %d\n",i,A[i]);
    }

    for(i=0;i<n;i++){
         for(j=i+1;j<n;j++){
            if(A[i]>A[j]){
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
         }
    }
    printf("Array After Sorting \n");
    printf("INDEX  VALUES \n");
    for(i=0;i<n;i++){
        printf("%d ----- %d\n",i,A[i]);
    }
    return 0;
}