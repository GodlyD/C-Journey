//Se citeste n natural. Sa se calculeze suma 1+2+3+...+n.
#include <stdio.h>
int main(){
int n, suma;

printf("Introdu un nr n natural:\n");
scanf("%i", &n);

for(int i=0; i<=n; i++){
    suma=suma+i;
}
printf("Suma este %i\n", suma);

return 0;
}
