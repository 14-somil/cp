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
    cin >> T;
    while (T--)
    {
        string a;
        cin >> a;
        a = '0' + a;
        int n = a.length();
        int k = -1;
        for (int i = n - 1; i > 0; i--)
        {
            if (a[i] >= '5')
            {
                if (a[i - 1] != '9')
                {
                    a[i - 1]++;
                    k = i;
                    // for(int j=i; j<n; j++)
                    // {
                    //     a[j]='0';
                    // }
                }
                else
                {
                    while (a[i - 1] == '9')
                    {
                        i--;
                    }
                    a[i - 1]++;
                    k = i;
                    // for(int j=i; j<n; j++)
                    // {
                    //     a[j]='0';
                    // }
                }
            }
        }
        if (k != -1)
        {
            for (int j = k; j < n; j++)
            {
                a[j] = '0';
            }
        }
        if (a[0] == '0')
        {
            a.erase(a.begin());
        }
        cout << a << endl;
    }
    return 0;
}