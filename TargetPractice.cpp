#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,j,sum=0;
        int score[10][10]={
            {1,1,1,1,1,1,1,1,1,1},
            {1,2,2,2,2,2,2,2,2,1},
            {1,2,3,3,3,3,3,3,2,1},
            {1,2,3,4,4,4,4,3,2,1},
            {1,2,3,4,5,5,4,3,2,1},
            {1,2,3,4,5,5,4,3,2,1},
            {1,2,3,4,4,4,4,3,2,1},
            {1,2,3,3,3,3,3,3,2,1},
            {1,2,2,2,2,2,2,2,2,1},
            {1,1,1,1,1,1,1,1,1,1},
        };
        string s[10];
        for(i=0;i<10;i++)
        {
            cin>>s[i];
        }
        for(i=0;i<10;i++)
        {
            for(j=0;j<10;j++)
            {
                if(s[i][j]=='X')
                    sum+=score[i][j];
            }
        }
        cout<<sum<<endl;

    }
    return 0;
}


