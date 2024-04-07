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
        map<int,int>mp;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        //cout<<mp.size()<<endl;

        if(mp.size()>2)
            cout<<"No"<<endl;
        else if(mp.size()==1)
            cout<<"Yes"<<endl;
        else
        {
            vector<int>v;
            for(auto rr:mp)
            {
                v.push_back(rr.second);
            }

            if(abs(v[0]-v[1])>1)
                cout<<"No"<<endl;
            else
                cout<<"Yes"<<endl;
        }


    }
    return 0;
}
