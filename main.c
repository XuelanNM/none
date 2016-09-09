#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main(int argc, char *argv[])

{
    int tableau[6] = {1, 2, 3, 4, 5, 6};
    sommeTableau(tableau,6);
    return;
}

int sommeTableau(int tableau[], int tailleTableau)

{
    int resTableau = 0, i = 0;
    for (i=0 ; i < tailleTableau ; i++)
    {
           resTableau = tableau[0] + tableau[i];
    }
    return resTableau;
}
