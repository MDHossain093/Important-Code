#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#define tst int t; cin>>t; while(t--)
#define fst ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define  pb push_back
typedef long long ll;
using namespace std;

bool cmp(pair<int,int>a,pair<int,int>b)
{
    if(a.second>b.second)
    {

        return true;
    return false;
}
if(a.first>b.first)
    return true;
return false;

}


int main(){
    fst;

    int n,m,i,j,k,x,y,l;
    cin>>n;
    vector<pair<int,int>>p;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        p.push_back({x,y});
    }
    sort(p.begin(),p.end(),cmp);
    for(i=0;i<n;i++)
    {
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }
    return 0;
}
