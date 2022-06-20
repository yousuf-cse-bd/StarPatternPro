/**
 * @file DiomonSrarPattern.cpp
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
    int rowNth = 7;
    int row, column, space, star;
    space = rowNth - 1;
    star = 1;
    for(row = 1; row<=rowNth; row++)
    {
        // Space print using column wise
        for(column = 1; column <= space; column++)
        {
            cout<<" ";
        }
        // star object printting
        for(column = 1; column<=star; column++)
        {
            cout<<"*";
        }
        if(space > row)
        {
            --space;
            star += 2;
        }
        if(space < row)
        {
            ++space;
            star -= 2;
        }
        cout<<endl;
    }
    return 0;
}
