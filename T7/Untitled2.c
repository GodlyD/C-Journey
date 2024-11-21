//7. Se citesc a,b,x valori reale. Sa se verifice daca x[a,b].
#include <stdio.h>
int main()
{
    float a, b, x;

    printf("Introdu capetele intervalului tau, urmat de x:\n");
    scanf("%f %f %f", &a, &b, &x);
    printf("Intervalul tau este [%.2f,%.2f]\nX este %.2f\n", a, b, x);
    if(a>b)
    {
        float temp = a;
        a = b;
        b = temp;
    }
    if(x>=a && x<=b)
        printf("%.2f apartine intervalului [%.2f,%.2f].\n", x, a, b);
    else
    {
        printf("%.2f nu apartine intervalului [%.2f,%.2f].\n", x, a, b);
    }
    return 0;
}
