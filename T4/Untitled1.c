//Să se scrie un program care citeşte două numere întregi şi verifică dacă cele doua numere au acelaşi semn.
#include <stdio.h>

int main(){

float a, b;
printf("Introdu doua numere intregi\n");
scanf("%f %f", &a, &b);

if((a>0 && b>0) || (a<0 && b<0))
    printf("a si b au acelasi semn\n");
    else if(a == 0 || b == 0)
        printf("0 nu este un numar valid!\n");
else
    printf("a si b nu au acelasi semn\n");
return 0;
}
