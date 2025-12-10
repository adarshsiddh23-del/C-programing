 #include<stdio.h>
int main()
{
    int A[20][20],R,C,i,j;
    printf("enter row and columns ");
    scanf("%d%d",&R,&C);

    printf("enter matrix values");
    for(i=0;i<R;i++){
        for(j=0;j<C;j++){
            scanf("%d",A[i][j]);
        }
    }
    printf("TRANSPOSE OF THE MATRIC IS ;\n");
    for(i=0;i<R;i++){
        for (j=0;j<C;j++){
            printf("%d",A[j][i]);
        }
    }
    return 0;

}