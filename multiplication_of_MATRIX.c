#include<stdio.h>
#include<stdlib.h>
int main()
{
    int A[10][10],B[10][10],C[10][10],R1,C1,R2,C2,i,j,k;
    printf("Enter matrix A rows and columns values");
    scanf("%d%d",&R1,&C1);

    printf("enter Matrix B columns and row values ");
    scanf("%d%d",&R2,&C2);

   if(C1!=R2)
      printf("Matrix multipilication is not possible");

    printf("Enter MAtrix A values");
    for(i=0;i<R1;i++){
        for(j=0;j<C1;j++){
            scanf("%d",&A[i][j]);
        }
    }

    printf("Enter Matrix B values");
    for(i=0;i<R2;i++){
        for(j=0;j<C2;j++){
            scanf("%d",&B[i][j]);
        }
    }


    for(i=0;i<R1;i++){
        for(j=0;j<C2;j++){
            C[i][j]=0;
            for(k=0;k<C1;k++){
                C[i][j]+= A[i][k] * B[k][j];
            }
        }
    }
    printf("RESULTANT MATRX IS \n");
    for(i=0;i<R1;i++){
        for(j=0;j<C2;j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    return  0;
   
}