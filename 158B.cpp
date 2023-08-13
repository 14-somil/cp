#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include <conio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[4] = {0};
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        switch (temp)
        {
        case 1:
        {
            a[0]++;
            break;
        }
        case 2:
        {
            a[1]++;
            break;
        }
        case 3:
        {
            a[2]++;
            break;
        }
        case 4:
        {
            a[3]++;
            break;
        }
        default:
        {
            break;
        }
        }
    }
    int ans = 0;
    ans += a[3];
    ans += a[2];
    if (a[2] < a[0])
        a[0] -= a[2];
    else
        a[0] = 0;

    if (a[1] % 2 != 0)
    {
        a[0] -= 2;
        ans++;
    }
    ans += a[1]/2;
    if(a[0]>0)
    {
        ans += a[0]/4;
        if(a[0]%4 != 0)
        {
            ans++;
        }
    }
    cout<<ans;
    return 0;
}