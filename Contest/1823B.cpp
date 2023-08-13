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
        int a[n];
        for(int i=0;  i<n; i++)
        {
            cin>>a[i];
        }

        int count=0;
        int b[2][2];

        for(int i=0; i<n; i++)
        {
            if(a[i]%k != (i+1)%k)
            {
                if(count == 0)
                {
                    count++;
                    b[0][0]=a[i];
                    b[0][1]=i+1;
                    continue;
                }
                else if(count == 1)
                {
                    count++;
                    b[1][0]=a[i];
                    b[1][1]=i+1;
                    continue;
                }
                else
                {
                    count++;
                    continue;
                }
            }
        }
        if(count == 0)
        {
            cout<<0<<endl;
        }
        else if(count == 2)
        {
            if(b[0][0]%k == b[1][1]%k)
            {
                if(b[1][0]%k == b[0][1]%k)
                {
                    cout<<1<<endl;
                }
                else
                {
                    cout<<-1<<endl;
                }
            }
            else
            {
                cout<<-1<<endl;
            }
        }

        else
        {
            cout<<-1<<endl;
        }

    }


    return 0;
}