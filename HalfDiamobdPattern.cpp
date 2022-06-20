/**
 * @file HalfDiamobdPattern.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int row, column, columnNth = 7;
    // UpperLevel print
    for(row = 1; row <= columnNth; row++)
    {
        for(column = 1; column <= row; column++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    // LowerLevel Print
    for(row = columnNth-1; row>=1; row--)
    {
        for(column = 1; column <= row; column++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
