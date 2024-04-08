#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    int n,i,mi=INT_MAX;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<mi)
            mi=min(mi,abs(a[i]));
    }

    if(mi<0)
        cout<<abs(mi)<<endl;
    else
        cout<<mi<<endl;
    return 0;
}
