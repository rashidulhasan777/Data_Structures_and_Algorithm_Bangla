/* This program calculate area of a circle from given 3 coordinates. */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double Ax, Ay, Bx, By, Cx, Cy;
    double area;
    cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy;

    area=(Ax*(By-Cy)+Bx*(Cy-Ay)+Cx*(Ay-By))/2;

    cout << fabs(area) << endl;

    return 0;
}
