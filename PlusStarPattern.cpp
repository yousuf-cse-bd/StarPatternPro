/**
 * @file PlusStarPattern.cpp
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
    int n = 13;
    for(int row = 1; row <= n; row++)
    {
        if(row == (n/2) + 1)
        {
            for(int column = 1; column <= n; column++)
            {
                // Horaizontal
                printf("+");
            }
        }
        else
        {
            for(int column = 1; column <= n/2; column++)
            {
                // Left Space
                printf(" ");
            }
            // Vertical
            cout<<"+";
        }

        cout<<endl;
    }
    return 0;
}
