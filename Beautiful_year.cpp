#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    int n, m;
    cin>>n;
    m=n+1;
    bool ans=true;
    while (ans=true)
    {
        int a=m%10, b=(m/10)%10, c=(m/100)%10, d=m/1000;
        if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        {
            cout<<m;
            break;
        }
        else
        {
            m++;
        }
    }
    return 0;
}