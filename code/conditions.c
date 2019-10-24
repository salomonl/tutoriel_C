#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

int main(void) {
    int i = 5; // variable to change
    if (i > 25) {
        puts("coucou");
    } else {
        puts("it is working !");
    }

    int value = 4;
    switch(value) {
        case 4: 
            puts("****");
            break;
        case 3:
            puts("***");
        case 2:
            puts("**");
        default:
            puts("Nothing!");
    }
    return EXIT_SUCCESS;
}

