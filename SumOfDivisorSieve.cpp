#include<bits/stdc++.h>
#define ll long long int
#define fst ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define PI 2*acos(0)
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ln "\n";
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin(), a.rend()
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define rvs(v) reverse(v.begin(),v.end());
#define pb push_back
#define tst ll t;cin>>t;while(t--)
#define UNIQUE(X) (X).erase(unique(all(X)), (X).end())
#define ff first
#define ss second
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define inf INT_MAX
/* ascii value
A=65,Z=90,a=97,z=122
*/
using namespace std;
const ll N = 1e5+10;
vector<ll>divisor[N];
int main(){
fst;
ll i,j,k,l,m,n;
for(i=2;i<N;i++)
for(j=i;j<N;j+=i)
{
    divisor[j].pb(i);
}
for(i=2;i<20;i++)
{
    for(auto div:divisor[i])
    {
        cout<<div<<" ";
    }
    cout<<endl;
}
return 0;
}