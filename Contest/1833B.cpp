#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <bits/stdc++.h>

#define ll long long

using namespace std;

struct Temp{
    int temp;
    int index;
};

bool compareTemp(Temp a, Temp b)
{
    if(a.temp<b.temp)
        return 1;
    return 0;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        ll int n, k;
        cin>>n>>k;
        Temp a[n], b[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i].temp;
            a[i].index=i;
        }

        for(int i=0; i<n; i++)
        {
            cin>>b[i].temp;
            b[i].index=i;
        }
        sort(a, a+n, compareTemp);
        sort(b, b+n, compareTemp);

        int ans[n]={0};

        for(int i=0; i<n; i++)
        {
            ans[a[i].index]=b[i].temp;
        }

        for(int i=0; i<n; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}