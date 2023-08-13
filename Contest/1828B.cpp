#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>

using namespace std;

int gcd(int a, int b)
{
  if (a == 0)
    return b;
  return gcd(b % a, a);
}
 
// Function to find gcd of array of
// numbers
int findGCD(int arr[], int n)
{
  int result = arr[0];
  for (int i = 1; i < n; i++)
  {
    result = gcd(arr[i], result);
 
    if(result == 1)
    {
    return 1;
    }
  }
  return result;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int  i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int diff[n];
        for(int i=0; i<n; i++)
        {
            diff[i]=abs(a[i] - (i+1));
        }
        int ans=findGCD(diff, n);

        cout<<ans<<endl;

    }
    return 0;
}