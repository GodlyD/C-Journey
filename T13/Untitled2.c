//Se citesc niste numere intregi (varstele unor candidati la un concurs) pana la introducerea valorii zero
//(conditia de sfarsit introducere date). Sa se determine varsta maxima a participantilor.
#include <stdio.h>
int main()
{
    int n=1, max = 0;

    printf("Introdu varstele candidatilor:(0 opreste programul)\n");
    while(n!=0)
    {
        scanf("%i", &n);
        if(n>max)
        {
            max=n;
    }
    }
    printf("Varsta maxima este %i.", max);

    return 0;

}
