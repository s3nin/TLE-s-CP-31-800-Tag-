#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i,f=0;
        cin>>n>>k;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==k)
                f=1;
        }

        if(f==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

    }
    return 0;
}
