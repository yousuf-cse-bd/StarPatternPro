/**
 * @file RightArrowStarPattern.cpp
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
    int row, column, columnNth = 5;
    // printing upper level
    for(row = columnNth; row>=1; row--)
    {
        // printing space
        for(column = columnNth; column>row; column--)
        {
            cout<<" ";
        }
        for(column = 1; column <= row; column++)
        {
            // printing stars
            cout<<"*";
        }
        cout<<endl;
    }
    // printing lower level
    for(row = 2; row<=columnNth; row++)
    {
        // printing space
        for(column = columnNth; column>row; column--)
        {
            cout<<" ";
        }
        for(column = 1; column <= row; column++)
        {
            // printing stars
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
