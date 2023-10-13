#include <gtest/gtest.h>
#include <iostream>
#include "../ExceptionalServer.hpp"


TEST(ExceptionalServerTests, a_0_b_1)
{
    try
    {
        std::cout << execute(0, 1);
    }
    catch(const std::exception& e)
    {
        ASSERT_TRUE(false) << "Should throw no exception" << std::endl;
    }    
}

TEST(ExceptionalServerTests, a_1_b_0)
{
    try
    {
        std::cout << execute(0, 1);
        ASSERT_TRUE(false) << "An exception is expected!";
    }
    catch(const std::exception& e)
    {
        ASSERT_TRUE(true);
    }    
}