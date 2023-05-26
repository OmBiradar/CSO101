#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int* matrix1 = (int*)malloc(n * n * sizeof(int));
    int* matrix2 = (int*)malloc(n * n * sizeof(int));
    
    for (int i=0; i<n*n; i++)
    {
        scanf("%d", &matrix1[i]);
    }
    
    for (int i=0; i<n*n; i++)
    {
        scanf("%d", &matrix2[i]);
    }
    
    int* matrixout = (int*)calloc(n * n, sizeof(int));
    
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            for (int k = 0 ; k < n; k++){
                matrixout[i*n + j] += matrix1[i*n + k] * matrix2[k*n + j];   
            }
        }
    }
    
    free(matrix1);
    free(matrix2);
    
    for (int i=0 ;i<n*n; i++)
    {
        if(i%n == 0)
            printf("\n");
        printf("%2d ", matrixout[i]);
    }
    
    free(matrixout);
    
    return 0;
}
