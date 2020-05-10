#pragma once

#include <array>
#include <vector>

std::array<int, 4> pickMorphs(const std::vector<float>& weights)
{
    std::array<int, 4> result {-1, -1, -1, -1};

    if(weights.cbegin() == weights.cend())
        return result;
}
