#include "gtest/gtest.h"
#include "pickMorphs.hpp"

TEST(PickMorphs, EmptyVector)
{
    const std::vector<float> emptyVector;

    ASSERT_EQ((pickMorphs(emptyVector)).at(0), -1);
    ASSERT_EQ((pickMorphs(emptyVector)).at(1), -1);
    ASSERT_EQ((pickMorphs(emptyVector)).at(2), -1);
    ASSERT_EQ((pickMorphs(emptyVector)).at(3), -1);
}

TEST(PickMorphs, VectorWithCapacitySmallerThanFive)
{
    const std::vector<float> smallVector {0.2, 0.4, 0.6};

    ASSERT_EQ((pickMorphs(smallVector)).at(0), 0);
    ASSERT_EQ((pickMorphs(smallVector)).at(1), 1);
    ASSERT_EQ((pickMorphs(smallVector)).at(2), 2);
    ASSERT_EQ((pickMorphs(smallVector)).at(3), -1);

    const std::vector<float> VectorFourElements {0.2, 0.4, 0.6, 0.8};

    ASSERT_EQ((pickMorphs(VectorFourElements)).at(0), 0);
    ASSERT_EQ((pickMorphs(VectorFourElements)).at(1), 1);
    ASSERT_EQ((pickMorphs(VectorFourElements)).at(2), 2);
    ASSERT_EQ((pickMorphs(VectorFourElements)).at(3), 3);
}

TEST(PickMorphs, VectorWithCapacityGreaterThanFive)
{
    const std::vector<float> testVector {0.3, 0.2, 0.9, 0.8, 0.1, 0.0,
                                        1.0, 0.4, 0.7, 0.5, 1.0, 0.6};

    ASSERT_EQ((pickMorphs(testVector)).at(0), 10);
    ASSERT_EQ((pickMorphs(testVector)).at(1), 6);
    ASSERT_EQ((pickMorphs(testVector)).at(2), 2);
    ASSERT_EQ((pickMorphs(testVector)).at(3), 3);
}
