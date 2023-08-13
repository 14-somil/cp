#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <bits/stdc++.h>
#include <conio.h>

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
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a, a+n);
        int m=0, temp=a[0];
        bool check=false;
        for(; m<n; m++)
        {
            if(a[m]!=temp)
            {
                check = true;
                break;
            }
        }
        if(check==false)
        {
            cout<<-1<<endl;
        }
        else
        {
            int b[m], c[n-m];
            for(int i=0; i<m; i++)
            {
                b[i]=temp;
            }
            for(int i=0; i<n-m; i++)
            {
                c[i]=a[i+m];
            }

            for(int i=0; i<m; i++)
            {
                cout<<b[i]<<" ";
            }
            cout<<endl;
            for(int i=0; i<n-m; i++)
            {
                cout<<c[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}