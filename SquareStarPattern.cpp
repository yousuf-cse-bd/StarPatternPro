/**
 * @file SquareStarPattern.cpp
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
    int i,j;
    for(i = 1; i<=6; i++)
    {
        for(j = 1; j<=6; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
