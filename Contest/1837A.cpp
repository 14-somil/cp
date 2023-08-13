#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,k;
        cin>>n>>k;
        if(n%k!=0)
        {
            cout<<1<<endl<<n<<endl;
        }
        else
        {
            cout<<2<<endl<<n-1<<' '<<1<<endl;
        }
    }
    return 0;
}