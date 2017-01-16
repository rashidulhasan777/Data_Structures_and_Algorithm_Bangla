/* This program calculate the angles of a triangle from given lengths 
http://mathcentral.uregina.ca/qq/database/qq.09.07/h/lucy1.html */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, A, B, C;
    cin >> a >> b >> c;

    A=((b*b)+(c*c)-(a*a))/(2*b*c);
    B=((a*a)+(c*c)-(b*b))/(2*a*c);
    A=acos(A)*(180/acos(-1));
    B=acos(B)*(180/acos(-1));
    C=180-(A+B);
    cout << A << "\t" << B << "\t" << C << endl;

    return 0;
}
