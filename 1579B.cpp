#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <bits/stdc++.h>

#define ll long long

using namespace std;

int min(ll int * start, ll int * end)
{
    ll int min = *start;
    int index=0;
    for(auto i=start; i<end; i++)
    {
        if(*i< min )
        {
            min = *i;
            index = i-start;
        }
    }

    return index;
}

struct Move{
    int l;
    int r;
    int d;
};

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        ll int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        vector <Move> v;
        for(int i=0; i<n; i++)
        {
            int index = min(a + i, a+n);
            if(index != 0)
            {
                for(int j=index+i; j>i; j--)
                {
                    swap(a[j], a[j-1]);
                }
                Move temp={i+1, index+i+1, index};
                v.push_back(temp);
            }
        }
        cout<<v.size()<<endl;
        for(auto i=v.begin(); i!=v.end(); ++i)
        {
            cout<< (*i).l<<" "<<(*i).r<<" "<<(*i).d<<endl;
        }      
    }
    return 0;
}