// Excercise 3 From page 32

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int sum=0, n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        sum+=pow(i, i);
    }
    cout << sum;
    return 0;
}
