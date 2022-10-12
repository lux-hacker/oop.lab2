#include "gtest/gtest.h"
#include "../model/Deltoida/Deltoida.h"

TEST(RatConstruction, DefaultConstruction){
    line::Deltoida d;
    ASSERT_EQ(d.getRadius(), 0);
}

TEST(RatConstruction, InitConstruction){
    line::Deltoida d1(123.456);
    ASSERT_EQ(d1.getRadius(), 123.456);
    const line::Deltoida& d2(d1);
    ASSERT_EQ(d2.getRadius(), d1.getRadius());
}

TEST(RatConstruction, TestException){
    ASSERT_ANY_THROW(line::Deltoida(-1));
}

int main(int argc, char *argv[]){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

