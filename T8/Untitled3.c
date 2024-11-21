//Andrei cunoaste pentru job-ul pe care tocmai l-a primit cat i se plateste pe ora si
//ca zilele de duminca sunt platite dublu. Daca va lucra x ore pe zi,
//n zile pe luna din care t duminici, cat va incasa la finalul lunii?
#include <stdio.h>
int main()
{
    int x, n, t, z, ora;

    printf("Cat esti platit pe ora?\n");
    scanf("%i", &ora);
    printf("Cate ore lucrezi pe zi?\n");
    scanf("%i", &x);
    printf("Cate zile lucrezi pe luna?\n");
    scanf("%i", &n);
    printf("Cate duminici lucrezi pe luna?\n");
    scanf("%i", &t);

    z=(ora*x*(n-t)+(2*ora*x*t));
    printf("La finalul lunii vei incasa %i lei.\n", z);
    return 0;
}
