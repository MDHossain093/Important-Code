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
#define distinct(v) v.resize(unique(v.begin(), v.end()) - v.begin());
#define ff first
#define ss second
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define inf INT_MAX
/* ascii value
A=65,Z=90,a=97,z=122
Digit Count=log10(x)+1
s.rfind('B')->last occurance<->s.find('B')->first occurance
*/
using namespace std;
void solve()
{
    ll n, m, i, j, k;
    cin >> n >> k;
    ll ar[n + 2];
    for (i = 1; i <= n; i++)
    {
        cin >> ar[i];
    }
    sort(ar + 1, ar + n + 1, greater<int>());
    // for(i=1;i<=n;i++)
    // cout<<ar[i]<<endl;
    for (i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            ll nd = min(k,ar[i-1]-ar[i]);
            ar[i]+=nd;
            k-=nd;

        }
    }
    ll a = 0, b = 0;
    for (i = 1; i <= n; i++)
    {
        if (i % 2)
            a += ar[i];
        else
            b += ar[i];
    }
    //cout<<a<<" "<<b<<endl;
        cout << a - b << endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--)
        solve();
}