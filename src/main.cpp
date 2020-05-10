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

    const std::vector<float> smallVector {0.2, 0.4, 0.6};
    showArray(pickMorphs(smallVector));

    const std::vector<float> testVector {0.3, 0.2, 0.9, 0.8, 0.1, 0.0,
                                        1.0, 0.4, 0.7, 0.5, 1.0, 0.6};
    showArray(pickMorphs(testVector));

    return 0;
}
