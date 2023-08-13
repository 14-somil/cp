#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        long long int m, max, max_f=0, min, min_f=0;
        cin>>m;
        long long int a[m];
        for(int j=0; j<m; j++)
        {
            cin>>a[j];
        }
        min=100000;
        max=0;
        for(int j=1; j<m; j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                min_f=1;
            }
            else if(a[j]==min)
            {
                min_f++;
            }

            if(a[j]>max)
            {
                max=a[j];
                max_f=1;
            }
            else if(a[j]==max)
            {
                max_f++;
            }
        }
        if(max!=min)
        {
            cout<<2*max_f*min_f<<endl;
        }
        else if(max==min)
        {
            cout<<m*(m-1)<<endl;
        }
    }
    return 0;
}