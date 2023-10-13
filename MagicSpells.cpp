#include "MagicSpells.hpp"
#include <sstream>
#include <iostream>
#include <vector>

using namespace std;

void printRow(const vector<int>& src)
{
    for(size_t i = 0; i < src.size(); i++)
    {
        cout << " | " << src.at(i);
    }
    cout << " |" << endl;
}

void printMatrix(const std::string& s1, const std::string& s2, const vector<vector<int>>& toPrint)
{
    cout << "| ";
    for (size_t x = 0; x < s1.size(); x++)
    {
        cout << " | " << s1.at(x);
    }
    cout << " |" << endl;

    for(size_t i = 0; i < toPrint.size(); i++)
    {
        cout << "| ";
        if (i == 0)
        {
            cout << " ";
        }
        if (i != 0)
        {
            cout << s2.at(i - 1);
        }

        printRow(toPrint.at(i));
    }
}

// s1 = "ABCBX" s2 = "ABDCAB"
vector<vector<int>> lcsLength(const std::string& s1, const std::string& s2)
{
    /*
    |   | Ø | A | B | D | C | A | B |
    | Ø | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
    | A | 0 | 1 | 1 | 1 | 1 | 1 | 1 |  
    | B | 0 | 1 | 2 | 2 | 2 | 2 | 2 |
    | C | 0 | 1 | 2 | 2 | 3 | 3 | 3 |
    | B | 0 | 1 | 2 | 2 | 3 | 3 | 4 |
    | X | 0 | 1 | 2 | 2 | 3 | 3 | 4 |
    */

   auto m_vec = vector<int>(s2.size(), 0);

    auto lcsLen = vector<vector<int>>(s2.size(), vector<int>(s1.size(), 0));


    return lcsLen;
}





int LongestCommonSubsequence(const std::string& s1, const std::string& s2)
{
    auto matrix = lcsLength(s1, s2);
    printMatrix(s1, s2, matrix);

    return 0;
}