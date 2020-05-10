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

    int counter = 1;
    float firstValue = weights.at(0); 
    float secondValue = -1.0, thirdValue = -1.0, fourthValue = -1.0;
    std::size_t firstValueIndex = 0;
    std::size_t secondValueIndex = -1, thirdValueIndex = -1, fourthValueIndex =-1;

    for(auto it = weights.begin() + 1; it != weights.end(); ++it, ++counter)
    {
        if(*it >= firstValue)
        {
            fourthValue = thirdValue;
            fourthValueIndex = thirdValueIndex;

            thirdValue = secondValue;
            thirdValueIndex = secondValueIndex;

            secondValue = firstValue;
            secondValueIndex = firstValueIndex;

            firstValue = *it;
            firstValueIndex = counter;
        } else if(*it >= secondValue)
                {
                    fourthValue = thirdValue;
                    fourthValueIndex = thirdValueIndex;

                    thirdValue = secondValue;
                    thirdValueIndex = secondValueIndex;

                    secondValue = *it;
                    secondValueIndex = counter;
                } else if(*it >= thirdValue)
                        {
                            fourthValue = thirdValue;
                            fourthValueIndex = thirdValueIndex;

                            thirdValue = *it;
                            thirdValueIndex = counter;
                        } else if(*it > fourthValue)
                                {
                                    fourthValue = *it;
                                    fourthValueIndex = counter;
                                }
    }

    result.at(0) = firstValueIndex;
    result.at(1) = secondValueIndex;
    result.at(2) = thirdValueIndex;
    result.at(3) = fourthValueIndex;

    return result;
}
