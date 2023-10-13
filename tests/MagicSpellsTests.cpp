#include <gtest/gtest.h>
#include "../MagicSpells.hpp"

using namespace std;

TEST(MagicSpellsTests, halp)
{
    string s1 = "ABCBX";
    string s2 = "ABDCAB";

    auto result = LongestCommonSubsequence(s1, s2);
    int expected = 5;

    ASSERT_EQ(result, expected);
}

// TEST(MagicSpellsTests, test0)
// {
//     string s1 = "AquaVitae";
//     string s2 = "AruTaVae";

//     auto result = nrOfsimilarLetters(s1, s2);
//     int expected = 6;

//     ASSERT_EQ(result, expected);
// }

// TEST(MagicSpellsTests, test1)
// {
//     string s1 = "AquaVitae";
//     string s2 = "AruTaVae";

//     auto result = nrOfsimilarLetters(s1, s2);
//     int expected = 6;

//     ASSERT_EQ(result, expected);
// }

// TEST(MagicSpellsTests, test3)
// {

// }

// TEST(MagicSpellsTests, test3)
// {
//     string s1 = "faPkdmElxiyjROOhuFHbaKpmmVAXQcPTiwtCiJC";
//     string s2 = "BVObzwbRESpqhpvjiDGmlVJ";

//     //auto result = nrOfsimilarLetters(s1, s2);
//     auto result = nrOfsimilarLetters(s2, s1);
//     int expected = 6;

//     ASSERT_EQ(result, expected);
// }