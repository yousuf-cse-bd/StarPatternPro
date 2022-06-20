/**
 * @file MirroredRightTriangleStarPattern.cpp
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

string mySpace(unsigned int n)
{
    string strSum = "";
    for(unsigned int i = 1;i<=n;i++)
    {
        strSum = strSum.append(" ");
    }
    return strSum;
}

int main(int argc, char const *argv[])
{
    /* code */
    system("cls");
    int rowNth;
    cout<<"Enter the number of rows: ";
    cin>>rowNth;
    int row, column, space;
    space = rowNth;
    for(row = 1; row <= rowNth; row++)
    {
        cout<<mySpace(--space);
        for(column = 1; column <= row; column++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}