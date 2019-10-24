#include <iostream>

int main(void) {

    // declarer une chaine de caracteres
    std::string s1("Blabla");
    std::cout << s1 << std::endl;

    // proprietes de la chaine de caracteres
    std::cout << s1.size() << std::endl;

    // acceder a un caractere de la chaine
    s1[0] = 'b';
    std::cout << s1 << std::endl;

    // concatenation de chaines de caracteres
    std::string s2("Hehehe");
    std::string s3 = s1 + ' ' + s2;
    std::cout << s3 << std::endl;

    return EXIT_SUCCESS;
}
