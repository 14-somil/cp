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
        long long int n, k;
        cin>>n>>k;
        long long int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a , a+n);
        // for(int i=0; i<n ;i++)
        // {
        //     cout<<a[i]<<" ";
        // }
        long long int start=0, end=n-1;
        for(int i=1; i<=k; i++)
        {
            int min=a[start] + a[start + 1], max = a[end];

            if(min < max)
            {
                a[start]=0;
                a[start+1]=0;
                start+=2;
            }
            else
            {
                a[end]=0;
                end-=1;
            }
        }
        long long int sum=0;
        for(int i=start; i<=end; i++)
        {
            sum+=a[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}