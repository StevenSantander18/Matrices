#include <stdio.h>
int main(int argc, char const *argv[])
{
    int matrix[4][4];
    int tamaño;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            matrix[i][j] = 0;
        }
        for (int i = 0; i < 4; i++)
        {
            matrix[i][i] = 1;
        }
        
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
    printf("ingresar el tamaño de la matriz del 1 al 4");
}
