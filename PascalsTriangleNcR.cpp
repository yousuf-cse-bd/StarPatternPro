/**
 * @file PascalsTriangleNcR.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief The pascals triangle using nCr
 * @version 0.1
 * @date 2022-09-24
 * @since SaturDay; 09:21 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;
/*Calculate factorial using user defined function*/
unsigned int factorial(unsigned short int n){
    if(n <= 1){
        return 1;
    }else{
        return (n*factorial(n - 1));
    }
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    unsigned int value;
    for(register unsigned short int n = 0; n < 5; n++){
        for(register unsigned short int r = 0; r <= n; r++){
            /*calculation: nCr = n!/(n-r)!*r!*/
            value = factorial(n)/(factorial(n-r)*factorial(r));
            cout<<value<<" ";
        }
        cout<<endl;
    }
    return 0;
}

