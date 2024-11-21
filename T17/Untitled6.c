#include <stdio.h>
int main()
{
    int n, s, i=3;
    printf("Introdu un numar natural n:\n");
    scanf("%i", &n);

    do
    {
        s=s+i;
        i++;
    }
    while(i<=n);
    printf("Suma este: %i", s);
    return 0;
}
