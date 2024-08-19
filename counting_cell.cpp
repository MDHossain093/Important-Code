//In the name of Allah

#include <bits/stdc++.h>
using namespace std;
 
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for (int i = a; i < (b); ++i)
#define all(x) x.begin(), x.end()
#define UNIQUE(X) (X).erase(unique(all(X)), (X).end())
#define endl '\n'
#define ll long long
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)

const int mx = 2e5+5;
const ll mod = 1e9+7;


void solve(int t, int cs) {

    int n,m,k;
    cin>>n>>m>>k;

    vector<ll>cnt;

    rep(i,0,n){
        rep(j,0,m){

            int lbx = max(0, i-k+1);
            int ubx = min(i,n-k);

            int lby = max(0,j-k+1);
            int uby = min(j,m-k);

             cnt.push_back((ubx-lbx+1)*1LL*(uby-lby+1));
        }
    }

    sort(all(cnt),__greater());

   
    int w;
    cin>>w;

    vector<int>wt(w);

    rep(i,0,w)
    cin>>wt[i];

    sort(all(wt),__greater());

    ll ans = 0;

    rep(i,0,w)
    ans+=(cnt[i]*wt[i]);

    cout<<ans<<endl;

}
 
int main() {
    fastio;
   // pre();
    int t; cin>>t;
    for(int tt=1; tt<=t; tt++)
    solve(t,tt);
    return 0;
}
