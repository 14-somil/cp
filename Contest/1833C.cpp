#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int min = *min_element(a, a + n);
        int max = *max_element(a, a + n);

        bool check = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 != 0)
            {
                check = false;
                break;
            }
        }

        if (check == true)
        {
            cout << "YES" << endl;
        }

        else
        {

            if (min % 2 == 1 && max % 2 == 1)
            {
                cout << "YES" << endl;
            }

            else if (min % 2 == 1 && max % 2 == 0)
            {
                cout << "YES" << endl;
            }

            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}