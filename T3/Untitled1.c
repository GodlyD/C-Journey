//Sa se calculeze expresiile: √x-3/x, log(2x).
#include <stdio.h>
#include <math.h>

int main(){
double x;

printf("Introdu o valoare pentru x:\n");
scanf("%lf", &x);

if(x>0){
    double rad = sqrt(x-3)/x;
    double logr = log(2 * x);

    printf("Radical din x-3 este %.2f\n", rad);
    printf("log(2x) este %.2f\n", logr);
}
else
    printf("x trebuie sa fie mai mare decat 0");
return 0;
}
