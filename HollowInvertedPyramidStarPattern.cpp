/**
 * @file HollowInvertedPyramidStarPattern.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    // Inverted figure row loop must be run reverse order
    int row, space, column, rowNth = 9;
    for(row = rowNth; row >=1; row --)
    {
        for(space = row; space < rowNth; space++)
        {
            cout<<" ";
        }
        for(column = 1; column< row * 2 ; column++)
        {
            if(column == 1)
            {
                // Left Part
                cout<<"*";
            }
            else if(row == rowNth)
            {
                // Roof
                cout<<"*";
            }
            else if(column == row * 2 - 1)
            {
                cout<<"*";
            }
            else
            {
                // Space
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
