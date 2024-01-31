
#include "es.h"

typedef struct maille
{
    T_Elt elt;
    struct maille *suiv;
    
}T_maille;



T_maille  *insererEnFin(T_maille  *,T_Elt* );
