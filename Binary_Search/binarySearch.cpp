/*

https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A
*/

#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
 
using namespace std;
 
typedef long long ll;
#define int ll
typedef long double ld;
const ll INF=1e18;
const ll M=1e9+7;
const ll MOD = 998244353;
double eps = 1e-12;
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 

void solve(){
     int n,k;
     cin>>n>>k;
     vector<int>arr(n);
     forn(i,n) cin>>arr[i];
     for(int i=0;i<k;i++){
          int x;
          cin>>x;
          int l=0,r=n-1;
          bool tk=false;
          while(l<=r){
               int mid=(l+r)/2;
               if(x==arr[mid]){
                    cout<<"YES"<<ln;
                    tk=true;
                    break;
               }else if(x>arr[mid]){
                    l=mid+1;
               }else{
                    r=mid-1;
               }
          }
          if(!tk){
               cout<<"NO"<<ln;
          }
          
     }
}

signed main()
{
//FUCK the rating, Just learn & grow after every contest!!! BEST of luck maharishi...you can do it..believe that...
 fast_cin();
#ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
   freopen("error.txt", "w", stderr);
#endif

 ll t=1;
 //cin >> t;
 while(t--) {
      solve();
 }
cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms";
 return 0;
}