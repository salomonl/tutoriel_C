#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int val = 3;
    printf("%d\n", val); // variable.
    printf("%p\n", &val); // adresse de la variable avec l operateur &

    int* ptr_to_val = &val; // declaration d un pointeur: s ecrit type_t* var_name
    val += 1; // changement de val

    *ptr_to_val += 1; // l operateur * permet d acceder a l endroit
    // ou pointe le pointeur

    printf("%d\n", val); // affiche 3

    /* Mais que se passe-t-il si le pointeur pointe vers un endroit 
       ou il n y a pas de valeur ? Par exemple:*/
    // int* very_very_ugly_ptr; // pointeur non initialise
    // printf("%d\n", *very_very_ugly_ptr); 

    // ... Comportement indefini : peut planter 
    // comme acces a une zone memoire non desiree. #hackergodblessing

    // TOUJOURS TOUJOURS INITIALISER UN POINTEUR !!	
    // TOUJOURS TOUJOURS INITIALISER UN POINTEUR !! Car il faut que cela rentre.

    //int* less_ugly_but_still_ptr = (void*)0;
    //printf("%d\n", *less_ugly_but_still_ptr); // fera planter le programme.

    return EXIT_SUCCESS;
}
