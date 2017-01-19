// From page no 32

#include <iostream>
using namespace std;

int main()
{
    int i, j=0, c=2, sum=0, n;

    cin >> n;

    for(i=1;i<=n;i++)
    {
        c=j+i;
        while(j<c)
        {
            j++;
            sum+=j;

        }
        j=c;
    }

    cout << sum << endl;

    return 0;
}
