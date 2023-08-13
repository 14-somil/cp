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
        int n;
        cin >> n;
        ll int a[n];
        ll int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (n != 1)
        {
            ll int min = a[0];
            for (int i = 1; i < n; i++)
            {
                min &= a[i];
            }
            ll int current = a[0], size = 1;
            if (min == 0)
            {
                for (int i = 0; i < n; i++)
                {
                    current &= a[i];
                    size++;
                    if (current == min)
                    {
                        count++;
                        current = a[i + 1];
                        size = 0;
                    }
                }
            }
            else
            {
                count = 1;
            }
        }
        else
        {
            count = 1;
        }
        cout << count << endl;
    }

    return 0;
}