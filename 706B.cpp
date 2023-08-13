#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include <conio.h>
#include <bits/stdc++.h>

#define ll long long

using namespace std;

int less_than(int a[], int low, int high, int key)
{
    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low + 1) / 2;
        int midVal = a[mid];

        if (midVal < key)
        {

            // if mid is less than key, all elements
            // in range [low, mid - 1] are <= key
            // then we search in right side of mid
            // so we now search in [mid + 1, high]
            low = mid + 1;
        }
        else if (midVal > key)
        {

            // if mid is greater than key, all elements
            // in range [mid + 1, high] are >= key
            // we note down the last found index, then
            // we search in left side of mid
            // so we now search in [low, mid - 1]
            ans = mid;
            high = mid - 1;
        }
        else if (midVal == key)
        {

            // if mid is equal to key, all elements in
            // range [low, mid] are <= key
            // so we now search in [mid + 1, high]
            low = mid + 1;
        }
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int q;
    cin >> q;
    while (q--)
    {
        ll int m;
        cin >> m;
        if (a[0] > m)
            cout << 0;
        else if (a[n - 1] <= m)
            cout << n;
        else
        {
            int check = less_than(a, 0, n - 1, m);
            cout << check;
        }
        cout << endl;
    }
    return 0;
}