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
#define inf INT_MAX
/* ascii value
A=65,Z=90,a=97,z=122
*/
using namespace std;
ll N = 1e7 + 10;
vector<ll> prime(N, 1), Hp(N, 0), Lp(N, 0);
int main()
{
    fst;
    ll i, m, n, j, k, l;
    for (i = 2; i < N; i++)
    {
        if (prime[i] == true)
        {
            Hp[i] = Lp[i] = i;
            for (j = 2 * i; j * j <= N; j += i)
            {
                prime[j] = false;
                Hp[j] = i;
                if (Lp[j] == 0)
                {
                    Lp[j] = i;
                }
            }
        }
    }
    // Existing code...

int num;
cin >> num;
vector<int> prmfax;
while (num > 1)
{
    int primefac = Hp[num];
    while (num % primefac == 0)
    {
        num /= primefac;
        prmfax.pb(primefac);
    }
}
for(i=0;i<prmfax.size();i++)
{
    cout<<prmfax[i]<<" ";
}
// Rest of the code...

    return 0;
}