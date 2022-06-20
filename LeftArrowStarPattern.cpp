/**
 * @file LeftArrowStarPattern.cpp
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
    // Upper level prinitng
    for(int row1 = 5; row1>=1; row1--)
    {
        for(int space = 1; space<row1; space++)
        {
            cout<<" ";
        }
        for(int colum1 = 1; colum1 <= row1; colum1++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    // Printing lower level
    for(int row1 = 2; row1<=5; row1++)
    {
        for(int space = 1; space<row1; space++)
        {
            cout<<" ";
        }
        for(int colum1 = 1; colum1 <= row1; colum1++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
