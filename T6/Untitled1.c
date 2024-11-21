//6. Se citesc a,b,c valori reale. Sa se afiseze minimul dintre ele, cu doua zecimale.
#include <stdio.h>
int main()
{
    float a, b, c;

    printf("Introdu trei numere reale:\n");
    scanf("%f %f %f", &a, &b, &c);

    if(a<=b && a<=c)
    {
        printf("%.2f este minimul\n", a);
    }
    else if(b<=a && b<=c)
    {
        printf("%.2f este minimul\n", b);
    }
    else
    {
        printf("%.2f este minimul\n", c);
    }

    return 0;
}
