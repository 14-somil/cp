#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include <conio.h>
#include <bits/stdc++.h>

const char diff = 'A' - 'a';

using namespace std;

int main()
{
    string a;
    cin >> a;
    bool state;
    if (a.length() != 1)
    {

        bool check = false;
        for (int i = 1; i < a.length(); i++)
        {
            if (a[i] >= 'a' && a[i] <= 'z')
            {
                check = true;
                break;
            }
        }
        if (check == true)
        {
            state = 0;
        }
        else
        {
            state = 1;
        }
        if(state == 0)
        {
            cout<<a;
        }
        else
        {
            for(int i=0; i<a.length(); i++)
            {
                if(a[i] >= 'a' && a[i] <= 'z')
                {
                    a[i] += diff;
                }
                else
                {
                    a[i] -= diff;
                }
            }
            cout<<a;
        }
    }
    else
    {
        if(a[0] >= 'a' && a[0] <= 'z')
            cout<< (char)(a[0]+diff);
        else
            cout<< (char)(a[0]-diff);
    }
    return 0;
}