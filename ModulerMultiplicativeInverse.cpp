#include <bits/stdc++.h>
#define ll long long int
#define fst                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define PI 2 * acos(0)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ln "\n";
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin(), a.rend()
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define rvs(v) reverse(v.begin(), v.end());
#define pb push_back
#define tst   \
    ll t;     \
    cin >> t; \
    while (t--)
#define UNIQUE(X) (X).erase(unique(all(X)), (X).end())
#define ff first
#define ss second
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm (a * b) / gcd(a, b)
#define inf INT_MAX
/* ascii value
A=65,Z=90,a=97,z=122
*/
const ll m = 1e9+7;
using namespace std;
int BinExp(ll a, ll p, ll m)
{
    ll ans = 1;
    while (p > 0)
    {
        if (p & 1)
        {
            ans = (ans * a) % m;
        }
        a = (a * a) % m;
        p >>= 1;
    }
    return ans;
}
int main()
{
    fst;
    ll n,r,i,j;
    ll fact[100];
    fact[0]=1;
    for(i=1;i<100;i++)
    {
        fact[i]=(fact[i-1]*i)%m;
    }
    cin>>n>>r;
    ll ans = fact[n];
    ans = (ans*fact[r])%m;
    ll den = (fact[n-r]*fact[r])%m;
    ans = (ans * BinExp(den,m-2,m))%m;
    //cout<<den<<endl;
    cout<<BinExp(den,m-2,m)<<endl;
    cout<<ans<<endl;

    return 0;
}