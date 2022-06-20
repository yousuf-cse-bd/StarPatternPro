/**
 * @file HollowInverterRightTriangleStarPattern.cpp
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
    int rowNth, row, column;
    cout<<"Enter the number of rowNth number?: ";
    cin>>rowNth;

    for(row = 1; row <= rowNth; row++)
    {
        for(column = rowNth; column >= row; column--)
        {
            if(row == 1 || column == rowNth || row == column)
            {
                cout<<row;
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
