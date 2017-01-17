// Sum of series from page no : 28

#include <iostream>
using namespace std;

int main()
{
    int sum=0, i, n;
    cin >> n;
    for(i=1;i<=n;i++)
    {
        sum+=i*(n-i+1);
    }
    cout << sum << endl;

    return 0;
}
