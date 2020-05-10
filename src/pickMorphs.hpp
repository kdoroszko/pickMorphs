#pragma once

#include <array>
#include <cstddef>
#include <vector>

std::array<int, 4> pickMorphs(const std::vector<float>& weights)
{
    const int numberOfIndicesToReturn = 4;
    std::array<int, numberOfIndicesToReturn> result {-1, -1, -1, -1};

    if(weights.cbegin() == weights.cend())
        return result;

    if(weights.size() <= numberOfIndicesToReturn)
    {
        for(std::size_t i = 0; i < weights.size(); ++i)
            result.at(i) = i;

        return result;
    }
}
