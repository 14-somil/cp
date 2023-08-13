#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string a;
        cin>>a;
        int n = a.length() / 2;
        char b = a[0];
        bool check=false;
        for (int i=1; i<n; i++)
        {
            char c = a[i];
            if(c!=b && n>1)
            {
                check=true;
                break;
            }
        }

        if(check==true)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}