#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

int main(void) {

    // variables declaration
    {
        unsigned int foo = 2; // declaration d'un entier non signe
        printf("%u\n", foo);

        double bar = 2.0; // declaration d'un flottant code sur 64 bits
        printf("%f\n", bar);

        bool buz = true; // declaration d'un boolean a true ou false.
        printf("%d\n", buz);

        char c = 'f'; // caractere
        printf("%c\n", c);
    }

    // operations usuelles
    {
        //int32_t h; // declaration d'un int non initialise sur 32 bits; mauvaise idee

        int foo = 2; // declaration d'un entier non signe
        foo = 3; // affectation d une autre valeur; ok.
        printf("%d\n", foo);

        //foo = 3.0; // error
        //double foo; // error : foo a deja un type int.

        int a = 2, b = 3; // declaration de deux entiers non signes.
        int c = a + b; // c = 5
        printf("%d\n", c);

        c = a - b; // c = -1
        printf("%d\n", c);

        c = 2 * ((3 * a) %  b); // c = 0
        printf("%d\n", c);

        double f = 3.0 / 2.0; // f = 1.5
        printf("%f\n", f);
    }

    // operations d affectation
    { 
        int foo = 2;
        ++foo;
        printf("%d\n", foo); // foo = 3;
        foo -= 4;
        printf("%d\n", foo);// foo = -4
    }
    
    // operateurs logiques
    {
        bool b1 = (2 > 3), b2 = (1 == 1);
        printf("b1 = %d, b2 = %d\n", b1, b2); // b1 = false, b2 = true
        bool b3 = (-3 != 2);
        printf("b3 = %d\n", b3); // b3 = true
        b3 = !b3;
        printf("b3 = %d\n", b3); // b3 = false
    }


}
