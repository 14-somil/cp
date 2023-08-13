#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        ll min=0, max=0, min_no=a[0], max_no=a[n-1];
        for(int i=0; i<n; i++)
        {
            if(a[i]==min_no)
                min++;
        }
        for(int i=n-1; i>=0; i--)
        {
            if(a[i]==max_no)
                max++;
        }
        if(min!=n)
        {
            cout<<2*min*max<<endl;
        }
        else
        {
            cout<<(n*(n-1))/2<<endl;
        }
    }
    return 0;
}