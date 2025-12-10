#include <stdio.h>

int main()  
{
    int i, j, n;
    int matrix[10][10];
    int trace = 0;

    printf("Enter the order of the square matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculating Trace
    for(i = 0; i < n; i++)
    {
        trace = trace + matrix[i][i];
    }

    printf("\nTrace of the matrix = %d\n", trace);

    return 0;
}
