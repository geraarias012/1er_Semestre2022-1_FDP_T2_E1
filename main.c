#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A;
    printf("Introduzca un numero: ");
    scanf("%d", &A);
    if(A>5)
    {
        printf("%d es mayor que 5", A);
    }
    else
    {
        if(A<5)
        {
            printf("%d es menor que 5", A);
        }
        else
        {
            printf("%d es igual a 5", A);
        }
    }
    return 0;
}
