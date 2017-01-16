/* http://www.mathopenref.com/heronsformula.html */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    double halfPerimeter, area;
    cin >> a >> b >> c;
    halfPerimeter=(a+b+c)/2;
    area=sqrt(halfPerimeter*(halfPerimeter-a)*(halfPerimeter-b)*(halfPerimeter-c));
    cout << area << endl;

    return 0;
}
