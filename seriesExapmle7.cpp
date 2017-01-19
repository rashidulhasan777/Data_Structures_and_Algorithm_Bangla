// From page 32

#include <iostream>
using namespace std;

int main()
{
    int i, j, sum=0, n;

    cin >> n;
    for(i=1, j=0;i<=n;i++,j++)
    {
        sum+=i*(n-j);
    }


    cout << sum << endl;

    return 0;
}
