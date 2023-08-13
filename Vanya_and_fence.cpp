#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    int n, h;
    cin>>n>>h;
    int width=0;
    for(int i=1; i<=n; i++)
    {
        int a;
        cin>>a;
        if(a<=h)
        {
            width+=1;
        }
        else
        {
            width+=2;
        }
    }
    cout<<width;
    return 0;
}