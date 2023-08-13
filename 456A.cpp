#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include <conio.h>
#include <bits/stdc++.h>

using namespace std;

struct Laptop{
    int a;
    int b;
};

bool Compare_a(Laptop A, Laptop B)
{
    return (A.a < B.a);
}

int main()
{
    int n;
    cin>>n;
    Laptop l[n];
    for(int i=0; i<n; i++)
    {
        cin>>l[i].a>>l[i].b;
    }
    sort(l, l+n, Compare_a);
    bool check = true;
    for(int i=0; i<n-1; i++)
    {
        if(l[i+1].a > l[i].a)
        {
            if(l[i+1].b >= l[i].b)
            {
                check = false;
                break;
            }
        }
    }
    if(check == true)
    {
        cout<<"Happy Alex";
    }
    else
    {
        cout<<"Poor Alex";
    }
    return 0;
}