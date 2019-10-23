#include <algorithm>
#include <iostream>
#include <vector>

int main(void) {

    // minimimum de deux elements
    std::cout << std::min(2, 3) << std::endl; // affiche 2

    // maximum de deux elements
    std::cout << std::max(2, 3) << std::endl; // affiche 3

    std::vector<int> v = {-6, 3, -2, 1, -11};

    // on affiche le vector
    for (int const elt: v) {
        std::cout << elt << " ";
    }
    std::cout <<  std::endl;

    // recherche du min dans le vector
    auto result = std::min_element(v.begin(), v.end());
    std::cout << *result << std::endl; // affichera -11

    // trier le vecteur
    std::sort(v.begin(), v.end());

    // on affiche de nouveau le vector
    for (int const elt: v) {
        std::cout << elt << " ";
    }
    std::cout <<  std::endl;

    return EXIT_SUCCESS;

}
