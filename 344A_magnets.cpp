#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    int n, count=1;
    cin>>n;
    bool pos; //true if 10 false if 01
    int a,b;
    cin>>a;
    for(int i=2; i<=n; i++)
    {
        int b;
        cin>>b;
        if(a!=b)
        {
            count++;
        }
        swap(a,b);
    }
    cout<<count;
    return 0;
}