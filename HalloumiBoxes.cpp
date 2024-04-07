#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i;
        cin>>n>>k;
        int a[n],b[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        int f=1;
        for(i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                f=0;
                break;
            }
        }
        if(k>1 || f==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
