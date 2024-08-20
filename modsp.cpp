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
#define srev(s) string(s.rbegin(), s.rend())
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
int main()
{
    fst;
    tst
    {
        ll n, m, i, j, k;
        ll Mod = 1e9 + 7;
        cin >> n >> m;
        ll ar[n + 10];
        ll sar[n + 10];
        ll sum = 0;
        for (i = 0; i < n; i++)
        {
            cin >> ar[i];
            sar[i] = ar[i];
            sum += ar[i];
        }
        ll Max = max(sar[0], 0LL);
        for (i = 1; i < n; i++)
        {
            if (sar[i] + sar[i - 1] >= sar[i])
            {
                sar[i] = (sar[i] + sar[i - 1]);
            }
            Max = max(sar[i], Max);
        }
        sum = (sum % mod + mod) % mod;
        Max = Max % mod;
        // cout<<sum<<" "<<Max<<endl;
        ll p = 1;
        for (i = 0; i < m; i++)
        {
            p = p * 2 % mod;
        }
        ll ans = (sum + (Max * p - Max)) % mod;

        cout << ans << endl;
    }
    return 0;
}