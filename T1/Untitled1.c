//Se citeste un numar n. Sa se afiseze daca este par sau impar.
#include <stdio.h>

int main(){
int n;

printf("Introdu un numar n:\n");
scanf("%i", &n);

if(n % 2 == 0)
    printf("%i este par\n", n);
else
    printf("%i este impar\n", n);

return 0;
}

