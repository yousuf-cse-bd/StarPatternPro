/**
 * @file HollowPyramidStarPattern.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    system("cls");
    int row, column, space, rowNth = 9;

    for(row =1; row <= rowNth; row++)
    {
        for(space = row ; space < rowNth; space++)
        {
            cout<<" ";
        }
        for(column = 1; column < row * 2; column++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    // cout<<column<<endl;
    return 0;
}