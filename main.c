#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int moyenneTableau(int tableau[], int tailleTableau)
{
    int resTableau = tableau[0] + tableau[1];
    return resTableau;
}

int main(int argc, char *argv[])
{
    int tableau[2];
    tableau[0] = 1;
    tableau[1] = 2;
    moyenneTableau(tableau,2);
    return ;
}
