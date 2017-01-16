/* This program take a input from user and print the nearest integer of its squareroot. */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num, sNum;
    double sqr;
    cin >> num;
    sqr=sqrt(num);
    sNum=(int)sqr;
    if(sqr>=sNum+0.5)
        cout << ceil(sqr);
    else
        cout << floor(sqr);

    return 0;
}
