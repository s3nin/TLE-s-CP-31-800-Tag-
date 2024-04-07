#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(a[0]==1)
            cout<<"Yes"<<endl;
        else{
            cout<<"No"<<endl;
        }

    }
    return 0;
}
