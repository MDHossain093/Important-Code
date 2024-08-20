#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#define tst int t; cin>>t; while(t--)
#define fst ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define  pb push_back
typedef long long ll;
using namespace std;


int main(){
    fst;
    int n,m,a,b,i,j,k,l;
    cin>>n;
    vector<int>v[n];
    for(i=0;i<n;i++)
    {
        cin>>m;
        for(j=0;j<m;j++)
        {
            cin>>a;
            v[i].push_back(a);
        }
    }
   for(i=0;i<n;i++)
    {
        for(j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    //vector<vector<int>>v;
    return 0;
}

