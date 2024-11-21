//Se citeste n natural. Sa se afiseze n stelute.
//Daca n este impar, pe linia urmatoare sa se afiseze n-4 stelute, centrat fata de primul rand.
#include <stdio.h>
int main(){
int n;

printf("Introdu un numar natural, diferit de 0:\n");
scanf("%i", &n);
if(n<=0){
    printf("Date invalide!\n");
    return 1;
}
for(int i=1; i<=n; i++){
    printf("*");
}
printf("\n");
printf("\n");
if(n % 2 != 0){
    for(int i=1; i<=2; i++){
        printf(" ");
    }
    for(int j=1; j<=n-4; j++){
        printf("*");
    }
}
return 0;
}
