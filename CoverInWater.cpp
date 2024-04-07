#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,f=0,c=0;
        cin>>n;
        string s;
        cin>>s;
        for(i=0;i<n;i++)
        {
            if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.')
            {
                f=1;
                break;
            }
            else{
                if(s[i]=='.')
                    c++;
            }
        }
        if(f==1)
            cout<<2<<endl;
        else
            cout<<c<<endl;
    }
    return 0;
}
