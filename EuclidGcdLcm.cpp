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
int gcd(int a, int b)
{
    if(b==0)
    return gcd(b,a%b);
}
int main(){
fst;
int a,b,c,i,j;
cin>>a>>b;
int l= gcd(a,b);
int lcm=(a*b)/l;
cout<<"Gcd ="<<l<<" Lcm ="<<lcm<<endl;
return 0;
}