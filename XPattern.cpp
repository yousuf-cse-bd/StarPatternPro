/**
 * @file XPattern.cpp
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
    for(int row = 1; row <=11; row++)
    {
        for(int column = 1; column <= 11; column++)
        {
            if(row == column)
            {
                // left 2 right diagonal
                cout<<"*";
            }
            else if(row + column == 11 + 1)
            {
                // Right 2 left diagonal
                cout<<"*";
            }
            else
            {
                // Spaces
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
