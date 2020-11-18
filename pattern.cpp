#include<bits/stdc++.h>
using namespace std;
main()
{
    for(int i=1;i<=7;i++)
    {
        int temp=i;
        while(temp>1)
        {
            cout<<" ";
            temp--;
        }
        for(int j=i;j<=7;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    for(int i=6;i>=1;i--)
    {
        int temp=i;
        while(temp>1)
        {
            cout<<" ";
            temp--;
        }
        for(int j=i;j<=7;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

