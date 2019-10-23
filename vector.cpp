#include <iostream>
#include <vector>

int main (void) {

    std::vector<int> v1 = {1, 2, 3, 4}; // declaration d un vector a 4 elements

    // on ajoute d autres int en fin de v
    v1.push_back(2);
    v1.push_back(-3);

    // parcourir v : modern c++ way
    for (int const elt : v1) {
        std::cout << elt  << " ";
    }
    std::cout << std::endl; // affichera 1 2 3 4 2 -3

    // comme en C pour les tableaux, on peut utiliser []
    std::cout << "2 element of v1 : " << v1[1] << std::endl;

    // on peut aussi connaitre le nombre d elements
    std::cout << v1.size() << std::endl;

    // et en supprimer
    v1.pop_back(); // v1 = {1, 2, 3, 4, -2}

    // declaration d un vector de double vide
    std::vector<double> v2;
    std::cout << v2.size() << std::endl; // affichera 0

    return EXIT_SUCCESS;

}
