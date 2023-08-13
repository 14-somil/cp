#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int x[n];
    for(int i=0; i<n;i++)
    {
        cin>>x[i];
    }
    int y[3][2]={
        {-1,0},
        {-1,0},
        {-1,0},
    };//table ki first row mein problem ka number(0 se n-1) aur second mein difficulty
    for(int i=0; i<=2; i++)
    {
        int max=0;
        for(int j=0;j<n;j++)
        {
            if(x[j]>max && x[j]<y[i-1][1])
            {
                max=x[j];
                y[i][0]=j;
                y[i][1]=max;
            }
            else if(x[j]==max && x[j]<y[i-1][1] && x[j]>0)
            {
                x[y[i][0]]=0;
                y[i][0]=j;
                y[i][1]=max;
            }

        }
        x[y[i][0]]=0;
    }
    if(y[2][1]==0)
    {
        y[0][0]=-2;
        y[1][0]=-2;
        y[2][0]=-2;
    }
    cout<<y[0][0]+1<<" "<<y[1][0]+1<<" "<<y[2][0]+1;
    return 0;
}