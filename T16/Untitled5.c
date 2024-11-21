//Calculati suma anterioara folosind structura iterativa cu test initial.
#include <stdio.h>
int main()
{
    int n, s=0;
    printf("Introdu un numar natural n mai mare decat 2:\n");
    scanf("%i", &n);
    if(n<3)
    {
        printf("Numar invalid\n");
        return 1;
    }
    int i=3;
    while(i<=n)
    {
        s = s + i;
        i++;
    }

    printf("Suma este: %i", s);
    return 0;
}
