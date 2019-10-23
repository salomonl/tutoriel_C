#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // differentes facons de declarer une chaine de caracteres en lecture 
    // et en ecriture.
    char chough0[] = "chough";

    char chough1[] = { "chough" };
    puts(chough1);

    char chough2[] = {'c', 'h', 'o', 'u', 'g', 'h', 0};
    puts(chough2);

    char chough3[] = {'c', 'h', 'o', 'u', 'g', 'h', };
    puts(chough3);

    // ceci n est pas une chaine de caracteres : pourquoi ?
    //char chough5[6] = {'c', 'h', 'o', 'u', 'g', 'h'};

    // dangereux mais existe: declaration d'une chaine de caracteres 
    // en lecture seulement.
    char* chough6 = "chough";
    puts(chough6);

    int val = 1;
    printf("%s is the number %d !\n", chough0, val);

    return EXIT_SUCCESS;

}

