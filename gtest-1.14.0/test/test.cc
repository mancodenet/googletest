#if 0
#include <gtest/gtest.h>

int add(int lhs, int rhs) { return lhs + rhs; }

int main(int argc, char const *argv[]) 
{

    EXPECT_EQ(add(1,1), 2) << "SUCCESS"; // PASS
    EXPECT_EQ(add(1,1), 1) << "FAILED: EXPECT: 2, but given 1"; // FAILDED

    return 0;
}
#endif



#include <iostream>
#include <string>
#include <gtest/gtest.h>
 
int add(int a, int b)
{
    return a + b;
}
 
TEST(Fun, AddTest)
{
    EXPECT_EQ(2, add(1, 1));
    EXPECT_EQ(0, add(1, -1));
}

TEST(Fun, AddTest1)
{
	EXPECT_EQ(1, add(1, 1));
}

TEST(Fun, AddTest2)
{
	EXPECT_EQ(1, add(1, 1));
}
 
int main(int argc, char **argv)
{
     ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
