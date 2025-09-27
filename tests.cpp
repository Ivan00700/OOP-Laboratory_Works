#include <gtest/gtest.h>
#include "grow.h"

TEST(ClimbTest, ReachesInOneDay) {
    Laba_01 res = Plant(10, 5, 7);
    EXPECT_EQ(res.day, 1);
    EXPECT_EQ(res.night, 0);
    EXPECT_EQ(res.realHeight, 10);
}

TEST(ClimbTest, MultipleDaysAndNights) {
    Laba_01 res = Plant(5, 2, 12);
    EXPECT_EQ(res.day, 4);
    EXPECT_EQ(res.night, 3);
    EXPECT_EQ(res.realHeight, 14);
}

TEST(ClimbTest, ExactHeight) {
    Laba_01 res = Plant(3, 1, 6);
    EXPECT_EQ(res.day, 3);
    EXPECT_EQ(res.night, 2);
    EXPECT_EQ(res.realHeight, 7);
}

TEST(ClimbTest, UpSpeedEqualsDesired) {
    Laba_01 res = Plant(5, 2, 5);
    EXPECT_EQ(res.day, 1);
    EXPECT_EQ(res.night, 0);
    EXPECT_EQ(res.realHeight, 5);
}

TEST(ClimbTest, ZeroInput) {
    Laba_01 res = Plant(0, 0, 0);
    EXPECT_EQ(res.day, 1);
    EXPECT_EQ(res.night, 0);
    EXPECT_EQ(res.realHeight, 0);
}

TEST(ClimbTest, ZeroUpSpeed) {
    Laba_01 res = Plant(0, 2, 10);
    EXPECT_EQ(res.day, 0);
    EXPECT_EQ(res.night, 0);
    EXPECT_EQ(res.realHeight, 0);
}

TEST(ClimbTest, ZeroDownSpeed) {
    Laba_01 res = Plant(5, 0, 15);
    EXPECT_EQ(res.day, 3);
    EXPECT_EQ(res.night, 2);
    EXPECT_EQ(res.realHeight, 15);
}

TEST(ClimbTest, LargeNumbers) {
    Laba_01 res = Plant(1000000, 500000, 10000000);
    EXPECT_EQ(res.day, 19);
    EXPECT_EQ(res.night, 18);
    EXPECT_EQ(res.realHeight, 10000000);
}
