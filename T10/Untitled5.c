//Fiind dată nota x a unui student, să se afișeze dacă acesta este promovat sau nu
#include <stdio.h>
int main(){
float x;

printf("Introduceti nota studentului:\n");
scanf("%f", &x);

if(x < 0 || x > 10){
    printf("Date invalide!\n");
    return 1;
}

if(x>=5){
    printf("Studentul a promovat!\n");
}
else
    printf("Studentul nu a promovat!\n");

return 0;
}
