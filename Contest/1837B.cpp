#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        string a;
        cin>>n;
        cin>>a;
        int ltMax=0, gtMax=0, lt=0,gt=0;
        char last='<';
        for(int i=0; i<n; i++)
        {
            if(last == a[i])
            {
                if(a[i]=='<')
                {
                    lt++;
                }
                else
                {
                    gt++;
                }
            }
            else
            {
                if(a[i]=='<')
                {
                    if(gt>gtMax)
                        gtMax=gt;
                    gt=0;
                    last='<';
                    lt++;
                }
                else
                {
                    if(lt>ltMax)
                        ltMax=lt;
                    lt=0;
                    last='>';
                    gt++;
                }
            }
        }
        if(gtMax<gt)
        {
            gtMax=gt;
        }
        if(ltMax<lt)
        {
            ltMax=lt;
        }

        if(gtMax>=ltMax)
        {
            cout<<gtMax+1<<endl;
        }
        else
        {
            cout<<ltMax+1<<endl;
        }
    }
    return 0;
}