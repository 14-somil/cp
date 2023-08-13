#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <bits/stdc++.h>

#define ll long long
const int N = 1e9 +7;

using namespace std;

int countGreater(ll int arr[], ll int n, ll int k)
{
    int l = 0;
    int r = n - 1;
 
    // Stores the index of the left most element
    // from the array which is greater than k
    int leftGreater = n;
 
    // Finds number of elements greater than k
    while (l <= r) {
        int m = l + (r - l) / 2;
 
        // If mid element is greater than
        // k update leftGreater and r
        if (arr[m] > k) {
            leftGreater = m;
            r = m - 1;
        }
 
        // If mid element is less than
        // or equal to k update l
        else
            l = m + 1;
    }
 
    // Return the count of elements greater than k
    return (n - leftGreater);
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        ll int a[n], b[n];

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        sort(a, a+n);
        sort(b, b+n);

        ll int ans=1;

        for(int i=n-1, k=0; i>=0; i--, k++)
        {
            int c = countGreater(a, n, b[i]);
            // for(int j=0; j<n; j++)
            // {
            //     if(a[j]>b[i])
            //     {
            //         c++;
            //     }
            // }
            if(c-k > 0)
                ans = (ans * (c-k)%N)%N;
            else
            {
                ans=0;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}