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
        ll int a[n]={0}, b[n-1]={0};
        bool check=true;
        cin>>a[0];
        for(int i=1; i<n; i++)
        {
            cin>>a[i];
            b[i-1] = a[i] - a[i-1];
            if(b[i-1] < 0)
            {
                check = false;
                break;
            }
        }

        if(check == true)
        {
            sort(b, b+n-1);
            cout<<(b[0]/2)+1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}