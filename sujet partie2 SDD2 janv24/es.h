#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char lettre;
    int valeur;
    int coef;
    } T_Lettre;


typedef  T_Lettre T_Elt;

void saisirElt();
void affecterElt();
void afficherElt();
