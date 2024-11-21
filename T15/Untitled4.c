//15. Se citeste n natural. Sa se calculeze suma 3+4+5+...+n.
#include <stdio.h>
int main(){
int n, s;
printf("Introdu un numar natural n:\n");
scanf("%i", &n);
for(int i=3; i<=n; i++){
    s=s+i;
}
printf("Suma este: %i", s);
return 0;
}
