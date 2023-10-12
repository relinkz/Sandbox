#include <gtest/gtest.h>
#include <string>
#include "../InheritedCode.hpp"

using namespace std;

TEST(InheritedCodeTests, Peter_Valid)
{
    try
    {
        string name = "Peter";
        bool result = checkUsername(name);

        ASSERT_TRUE(result) << "Got in invalid result on a valid name";
    }
    catch(const std::exception& e)
    {
        ASSERT_TRUE(false) << "Valid name Peter threw an exception: " << e.what();
    }
}

TEST(InheritedCodeTests, Arxwwz_Invalid)
{
    try
    {
        string name = "Arxwwz";
        bool result = checkUsername(name);

        ASSERT_FALSE(result) << "Got in valid result on a invalid name";
    }
    catch(const std::exception& e)
    {
        ASSERT_TRUE(false) << "Valid name Peter threw an exception: " << e.what();
    }
}

TEST(InheritedCodeTests, 100Name_Valid)
{
    try
    {
        string name(100, 'a');
        bool result = checkUsername(name);

        ASSERT_TRUE(result) << "Got in invalid result on a valid name";
    }
    catch(const std::exception& e)
    {
        ASSERT_TRUE(false) << "Valid name a*100 threw an exception: " << e.what();
    }
}

TEST(InheritedCodeTests, Me_ThrowException)
{
    try
    {
        string name = "me";
        bool result = checkUsername(name);

        ASSERT_TRUE(result) << "Me did not throw exception and passed as a name";
        ASSERT_FALSE(result) << "Me did not throw exception and did not pass as a name";
    }
    catch(const std::exception& e)
    {
        string expected = "Too short: 2\n";
        string result = e.what();

        ASSERT_EQ(expected, result);
    }
}

TEST(InheritedCodeTests, Four_ThrowException)
{
    try
    {
        string name = "Four";
        bool result = checkUsername(name);

        ASSERT_TRUE(result) << "Me did not throw exception and passed as a name";
        ASSERT_FALSE(result) << "Me did not throw exception and did not pass as a name";
    }
    catch(const std::exception& e)
    {
        string expected = "Too short: 4\n";
        string result = e.what();

        ASSERT_EQ(expected, result);
    }
}