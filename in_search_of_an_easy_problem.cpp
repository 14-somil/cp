#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    bool check=true;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int a;
        cin>>a;
        if(a==1)
        {
            cout<<"HARD";
            check=false;
            break;
        }
    }
    if (check==true)
    cout<<"EASY";
    return 0;
}