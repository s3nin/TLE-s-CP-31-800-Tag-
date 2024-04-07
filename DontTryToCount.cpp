#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,n,m,flag=0;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        for(i=0;i<6;i++)
        {
            if(x.find(s)!=-1)
            {
                flag=1;
                cout<<i<<endl;
                break;
            }
            x+=x;
        }
        if(flag==0)
            cout<<-1<<endl;
    }
    return 0;
}
