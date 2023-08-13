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
        int n;
        cin>>n;
        ll int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        int itr=n-1;
        while(itr>0 && a[itr] >= a[itr-1])
        {
            itr--;
        }
        if(itr==0)
        {
            cout<<0<<endl;
        }
        else
        {
            sort(a, a+itr);
            cout<<a[itr-1]<<endl;
         
        }
        
    }
    return 0;
}