#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <bits/stdc++.h>

#define ll long long

using namespace std;

struct Num{
    ll int num;
    ll int fre;
};

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        ll int k=(n*(n-1))/2;
        ll int b[k];
        for(int i=0; i<k; i++)
        {
            cin>>b[i];
        }
        sort(b, b+k);
        vector <Num> d;
        int counter = 0;
        for(int i=0; i<k-1; i++)
        {
            counter++;
            if(i != k-2 && b[i]!=b[i+1])
            {
                Num temp = {b[i], counter};
                d.push_back(temp);
                counter = 0;
            }
            else
            {
                if(b[i]!=b[i+1])
                {
                    Num temp = {b[i], counter};
                    d.push_back(temp);
                    temp = {b[i+1], 1};
                    d.push_back(temp);
                    counter = 0;
                }
                else
                {
                    Num temp = {b[i], counter+1};
                    d.push_back(temp);
                    counter = 0;
                }
            }
        }
        vector <ll int> a;
        int m=n-1;
        auto itr=d.begin();
        while(a.size()!=n)
        {
            if(itr != d.end()-1)
            {
                if((*itr).fre != 0)
                {
                    a.push_back((*itr).num);
                    (*itr).fre -= m;
                    m--;
                }
                else
                {
                    itr++;
                }
            }
            else
            {
                a.push_back((*itr).num);
            }
            // else
            // {
            //     if(itr == d.end())
            //     {
            //         a.push_back((*(itr+1)).num);
            //         m--;
            //     }
            //     else
            //     {
            //         itr++;
            //     }
            // }
        }

        for(auto i=a.begin(); i!=a.end(); i++)
        {
            cout<<*i<<' ';
        }
        cout<<endl;
    }
    return 0;
}