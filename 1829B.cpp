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
        cin>>n;
        int count=0, max=0;
        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            if(temp == 0)
            {
                count++;
            }
            else if(temp == 1)
            {
                if(max<count)
                {
                    max = count;
                    count = 0;
                }
                else
                {
                    count = 0;
                }
            }
        }
        if(max<count)
            max=count;
        cout<<max<<endl;

    }
    return 0;
}