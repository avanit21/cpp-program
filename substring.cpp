#include<bits/stdc++.h>
using namespace std;
vector<string> permu;
void permutation(string a,int left,int right)
{
    if(left==right)
    {
        permu.push_back(a);
    }
    else
    {
        for(int i=left;i<=right;i++)
        {
            swap(a[left],a[i]);
            permutation(a,left+1,right);
            swap(a[left],a[i]);
        }
    }
}
main()
{
    string str1="XYYZXZYZXXYZ";
    string str2="XYZ";

    int n=str2.size();

    permutation(str2,0,n-1);
    for(int i=0;i<permu.size();i++)
    {
        size_t index=str1.find(permu[i]);
        while(index != string::npos)
        {
            cout<<"Substring "<<permu[i]<<" present at index "<<index<<endl;
            index=str1.find(permu[i],index+1);
        }
    }


}
