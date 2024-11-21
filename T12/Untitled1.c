// Afiseaza piramida cu n elemente
#include <stdio.h>
int main()
{
    int n;

    printf("Introdu un numar natural n:\n");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++)   // Parcurgem fiecare rând
    {
        for (int j = 1; j <= i; j++)   // Tipărim numerele de la 1 până la i
        {
            printf("%d", i);
        }
        printf("\n"); // Trecem la rândul următor
    }
    printf("\n");
    printf("\n");
    printf("\n");


for (int i = 1; i <= n; i++) {
        int numere_de_tiparit = 2 * i - 1; // Calculăm numărul de elemente de tipărit (1, 3, 5, ...)

        // Tipărim spațiile pentru aliniere
        for (int j = 1; j <= n - i; j++) {
            printf("  "); // Spațiu dublu pentru alinierea frumoasă
        }

        // Tipărim numerele pe fiecare rând
        for (int j = 1; j <= numere_de_tiparit; j++) {
            printf("%d ", i);
        }

        printf("\n"); // Trecem la rândul următor
    }

    return 0;
}
