/**
 * @file HollowSquareStarPatternWithDiagonal.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-03
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

    int row, column;

    int n = 9;

    for(row = 1; row <= n; row++)
    {
        for(column = 1; column <= n; column++)
        {
            if(row == 1 || row == n || column == 1 || column == n) // Hollow Square
            {
                cout<<"*";
            }
            else if(row == column) // left to right diagonal
            {
                cout<<"*";
            }
            else if(row + column == n+1) // right to left diagonal
            {
                cout<<"+";
            }
            else
            {
                cout<<" "; 
            }
        }
        cout<<endl;
    }
    return 0;
}
