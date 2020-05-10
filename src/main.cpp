#include <array>
#include <iostream>
#include <vector>
#include "pickMorphs.hpp"

void showArray(std::array<int, 4> arrayToShow)
{
    std::cout << "Result of function pickMorphs:\n";
    for(const auto& elem: arrayToShow)
        std::cout << elem << '\n';
    std::cout << '\n';
}

int main()
{
    const std::vector<float> emptyVector;
    showArray(pickMorphs(emptyVector));

    return 0;
}
