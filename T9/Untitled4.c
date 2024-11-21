//Determinați câte sticle de x litri cu apă trebuie folosite pentru a umple un vas de y litri.
#include <stdio.h>
int main(){
float x, y, z;

printf("Ce capacitate are sticla ta?\n");
scanf("%f", &x);
printf("Ce capacitate are vasul tau?\n");
scanf("%f", &y);
if(y<x || x<=0 || y<=0){
    printf("Datele introduse nu sunt valide!\n");
    return 1;
}
z=y/x;
printf("Vei avea nevoie de %.2f sticle de %.2f L pentru a umple vasul de %.2f L.\n", z, x, y);
return 0;
}
