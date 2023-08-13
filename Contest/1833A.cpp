#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        char a[n];
        cin>>a;

        string notes[n-1]={'\0'};

        for(int i=0; i<n-1; i++)
        {
            string b = notes[i] + notes[i+1] + '\0';
            for(int i=0; i<n; i++)
            {
                if(b.compare(notes[i])==0)
                {
                        
                }
            }
        }

    }
    return 0;
}