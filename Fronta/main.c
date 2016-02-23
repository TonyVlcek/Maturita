#include <stdio.h>
#include "fronta.h";

int main()
{

    Init();

    printf("%.2f\n", Odeber());
    Vloz(2);
    Vloz(3);
    printf("%.2f\n", Odeber());
    Vloz(4);

    Vypis();

    return 0;
}
