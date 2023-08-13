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
        int n, k;
        cin>>n>>k;
        int a[n];
        int ans=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int diff[n-1];
        for(int i=0; i<n-1; i++)
        {
            diff[i]=abs(a[i]-a[i+1]);
        }

        sort(diff, diff+n-1);

        for(int i=0; i<n-k; i++)
        {
            ans+=diff[i];
        }
        cout<<ans<<endl;
        
    }
    return 0;
}
