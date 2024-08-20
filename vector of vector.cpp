
#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#define tst int t; cin>>t; while(t--)
#define fst ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define  pb push_back
typedef long long ll;
using namespace std;


int main()
{
    fst;

    int t,a,n,m,i,N,j,k,l;
    cin>>N;
    vector <vector<int>>v;
    for(i=0; i<N; i++)
    {
        cin>>n;
        vector<int>temp;
        for(j=0; j<n; j++)
        {
                cin>>a;
                temp.push_back(a);
        }
        v.push_back(temp);
    }
    v[0].push_back(12);
    v[1].push_back(23);
    for(i=0;i<v.size();i++)
    {
        for(j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
