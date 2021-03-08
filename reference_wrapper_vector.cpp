// Functional - reference wrapper
// reference_wrapper_vector.cpp
// source: https://ict.senecacollege.ca/~oop345/pages/content/algor.html

#include <iostream>
#include <vector>
#include <functional>

int main() {
    std::vector<double> original(5, 10.3);
    std::vector<std::reference_wrapper<double>>
        references(original.begin(), original.end());
    for (auto& e : original)
        e *= 3;
    for (auto e : references)
        std::cout << e << " ";
    std::cout << std::endl;
}