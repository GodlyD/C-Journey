//Se citesc a,b valori intregi. Sa se afiseze minimul.
#include <stdio.h>
int main()
{
    int a, b;

    printf("Introdu doua numere intregi\n");
    scanf("%i %i", &a, &b);

    if(a<b)
    {
        printf("%i este minimul\n", a);
    }
    else if(a==b)
    {
        printf("Cele doua numere sunt egale\n");
    }
    else
        printf("%i este minimul\n", b);

    return 0;
}
