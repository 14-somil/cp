#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>

#define M 1000000007

using namespace std;

int main()
{
    long int m;
    cin>>m;
    for(int i=1; i<=m; i++)
    {
        long long int n, ans_1, ans_2=0, ans, ans_f;
        cin>>n;
        ans_1=(2022*((n*(n+1)*(2*n+1)/6)%M))%M;
        if(n%3==0)
        {
            ans_2=(2022*(((n-1)%M)*(n/3)%M*((n+1)%M)))%M;
        }
        if(n%3==1)
        {
            ans_2=(2022*((((n-1)/3)%M)*(n)%M*((n+1)%M)))%M;
        }
        if(n%3==2)
        {
            ans_2=(2022*(((n-1)%M)*(n)%M*(((n+1)/3)%M)))%M;
        }
        ans=(ans_1+ans_2)%M;
        ans_f=(ans)%(M);
        cout<<ans_2<<" "<<ans_f<<endl;
    }
    return 0;
}