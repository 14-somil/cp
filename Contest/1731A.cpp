#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int m;
        cin>>m;
        int a[m];
        for(int j=0; j<m; j++)
        {
            cin>>a[j];
        }
        long long int product=1;
        for(int j=0; j<m; j++)
        {
            product=product*a[j];
        }
        long long int ans;
        ans=product+(m-1);
        cout<<2022*ans<<endl;
    }
    return 0;
}