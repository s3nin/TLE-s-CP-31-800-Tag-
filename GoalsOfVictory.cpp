#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,sum=0;
        cin>>n;
        int a[n];
        for(i=0;i<n-1;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }

        cout<<0-sum<<endl;

    }
    return 0;
}

