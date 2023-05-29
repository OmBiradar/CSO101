#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    printf("Enter the dimentions of the first matrix \t");
    scanf("%dx%d", &n, &m);
    printf("Enter the dimentions of the second matrix \t");
    int a, o;
    scanf("%dx%d", &a, &o);
    if(a==m){

        int* matrix1 = (int*)malloc(n * m * sizeof(int));
        int* matrix2 = (int*)malloc(m * o * sizeof(int));
        
        for (int i=0; i<n*m; i++)
        {
            scanf("%d", &matrix1[i]);
        }
        
        for (int i=0; i<m*o; i++)
        {
            scanf("%d", &matrix2[i]);
        }
        
        int* matrixout = (int*)calloc(n * o, sizeof(int));
        
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<o; j++)
            {
                for (int k = 0 ; k < m; k++){
                    matrixout[i*o + j] += matrix1[i*m + k] * matrix2[k*o + j];   
                }
            }
        }
        
        free(matrix1);
        free(matrix2);
        
        for (int i=0 ;i<n*o; i++)
        {
            if(i%n == 0)
                printf("\n");
            printf("%2d ", matrixout[i]);
        }
        
        free(matrixout);
        
        return 0;
    }else{
        printf("The matrixes are not compatable for multiplicatoin!");
        return 0;
    }
    
}
