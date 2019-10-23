#include <stdio.h>
#include <stdlib.h>

int main(void) {
   int a = 132 ;
   {
       int b = 456 ;
       int c = b + a;
       printf("%d\n", c);
   } // destruction de c puis b
   return EXIT_SUCCESS;
} //destruction de a
