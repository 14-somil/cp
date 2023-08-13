#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <bits/stdc++.h>

#define ll long long

using namespace std;

int mostFrequent(ll int* arr, int n)
{
    // code here
    int maxcount = 0;
    int element_having_max_freq;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
  
        if (count > maxcount) {
            maxcount = count;
            element_having_max_freq = arr[i];
        }
    }
  
    return maxcount;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        if (n != 1)
        {
            ll int sum=0, a[n], num_of_1=0;
            for(int i=0; i<n; i++)
            {
                cin>>a[i];
                sum+=a[i];
                if(a[i]==1)
                {
                    num_of_1++;
                }
            }

            if((num_of_1+n)<=sum)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            int a;
            cin>>a;
            cout<<"NO"<<endl;
        }
    }
    return 0;
}