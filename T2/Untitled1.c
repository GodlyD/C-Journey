//Fiind date vârstele a doi copii afișați care dintre ei este cel mai mare și cu cât este mai mare.
#include <stdio.h>
int main()
{
    int a, b, n;

    printf("Introdu varsta celor doua persoane:\n");
    scanf("%i %i", &a, &b);
    if(a <= 0 || b <= 0)
    {
        printf("Datele nu sunt valide\n");
        return 1;
    }
        if(a >= b){
            n = a - b;
        printf("Prima persoana este mai mare decat al doilea cu %i ani.\n", n);
        }
        else{
            n = b - a;
            printf("A doua persoana este mai mare decat primul cu %i ani.\n", n);
        }
    return 0;
}
