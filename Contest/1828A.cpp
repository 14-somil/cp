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
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n ; i++)
        {
            a[i]=2*(i+1);
        }

        for(int i=0; i<n; i++)
        {
            cout<<a[i]<<" ";

        }
        cout<<endl;
    }
    return 0;
}