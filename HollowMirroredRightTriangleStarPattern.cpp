/**
 * @file HollowMirroredRightTriangleStarPattern.cpp
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
    int rowNth;
    cout<<"Enter the number of rows: ";
    cin>>rowNth;
    int row, column,space;
    for(row = 1; row <= rowNth; row++)
    {
        for(space = rowNth; space > row; space -- )
        {
            cout<<" ";
        }
        for(column = 1; column <= row; column++)
        {
            if(row == column || row == rowNth || column == 1)
            {
                cout<<"*";
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