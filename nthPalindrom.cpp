#include <iostream>
using namespace std;

int main()
{
    int ara[100];
    int c=0, rev, t, nth;
    cin >> nth;
    for(int i=1;i<10000;i++)
    {
        rev=0;
        t=i;
        while(t!=0)
        {
            rev*=10;
            rev+=t%10;

            t/=10;
        }
        if(rev==i)
        {
            ara[c]=i;
            c++;
        }
        if(c==100)
            break;
    }

    cout << ara[nth-1] << "\t";
    return 0;
}
