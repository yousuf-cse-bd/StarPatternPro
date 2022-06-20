/**
 * @file RhombusStarPattern.cpp
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
    int rowNth;
    cout<<"Enter the number of row: ";
    cin>>rowNth;

    int row, column, space;
    for(row = 1; row <= rowNth; row++)
    {
        for(space = row; space <rowNth; space++)
        {
            cout<<" ";
        }
        for(column = 1; column <= rowNth; column++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
