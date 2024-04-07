#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,i;
        cin>>n>>x;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int d=a[0];
        int k=a[0];
        for(i=1;i<n;i++)
        {
            k=a[i]-a[i-1];
            d= max(k,d);
        }
        k=x-a[n-1];
        k*=2;
        d=max(k,d);
        cout<<d<<endl;
    }
    return 0;
}

