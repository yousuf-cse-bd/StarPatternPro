/**
 * @file HollowInvertedMirroredRightTriangle.cpp
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
     /* code */
    system("cls");
    int rowNth, row, column;
    cout<<"Enter the number of rowNth number?: ";
    cin>>rowNth;

    int space;
    for(row = 1; row <= rowNth; row++)
    {
        for(space = 1; space < row; space++)
        {
            cout<<" ";
        }
        for(column = rowNth; column >= row; column--)
        {
            if(row == column || row == 1 || column == rowNth)
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
