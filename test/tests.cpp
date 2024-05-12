// Copyright 2024 Dostavalov Semyon

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


TEST(PrimeFunctionsTest, CheckPrime) {
    EXPECT_TRUE(checkPrime(2));
    EXPECT_TRUE(checkPrime(3));
    EXPECT_TRUE(checkPrime(5));
    EXPECT_TRUE(checkPrime(7));
    EXPECT_TRUE(checkPrime(11));
    EXPECT_TRUE(checkPrime(13));
    EXPECT_TRUE(checkPrime(17));
    EXPECT_TRUE(checkPrime(19));
    EXPECT_TRUE(checkPrime(23));
    EXPECT_TRUE(checkPrime(29));
    EXPECT_TRUE(checkPrime(31));
    EXPECT_TRUE(checkPrime(37));

    EXPECT_FALSE(checkPrime(0));
    EXPECT_FALSE(checkPrime(1));
    EXPECT_FALSE(checkPrime(4));
    EXPECT_FALSE(checkPrime(6));
    EXPECT_FALSE(checkPrime(8));
    EXPECT_FALSE(checkPrime(9));
    EXPECT_FALSE(checkPrime(10));
    EXPECT_FALSE(checkPrime(12));
    EXPECT_FALSE(checkPrime(14));
    EXPECT_FALSE(checkPrime(15));
    EXPECT_FALSE(checkPrime(16));
    EXPECT_FALSE(checkPrime(18));
    EXPECT_FALSE(checkPrime(20));
}

TEST(PrimeFunctionsTest, NPrime) {
    EXPECT_EQ(nPrime(1), 2);
    EXPECT_EQ(nPrime(2), 3);
    EXPECT_EQ(nPrime(3), 5);
    EXPECT_EQ(nPrime(4), 7);
    EXPECT_EQ(nPrime(5), 11);
    EXPECT_EQ(nPrime(6), 13);
    EXPECT_EQ(nPrime(7), 17);
    EXPECT_EQ(nPrime(8), 19);
    EXPECT_EQ(nPrime(9), 23);
    EXPECT_EQ(nPrime(10), 29);
    EXPECT_EQ(nPrime(11), 31);
}

TEST(PrimeFunctionsTest, NextPrime) {
    EXPECT_EQ(nextPrime(2), 3);
    EXPECT_EQ(nextPrime(3), 5);
    EXPECT_EQ(nextPrime(5), 7);
    EXPECT_EQ(nextPrime(7), 11);
    EXPECT_EQ(nextPrime(11), 13);
    EXPECT_EQ(nextPrime(13), 17);
    EXPECT_EQ(nextPrime(17), 19);
    EXPECT_EQ(nextPrime(19), 23);
    EXPECT_EQ(nextPrime(23), 29);
    EXPECT_EQ(nextPrime(29), 31);
}

TEST(PrimeFunctionsTest, SumPrime) {
    EXPECT_EQ(sumPrime(10), 17);
    EXPECT_EQ(sumPrime(20), 77);
    EXPECT_EQ(sumPrime(30), 129);
}
