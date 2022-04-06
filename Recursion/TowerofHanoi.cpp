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



// time comp:-O(2^n)
//space comp:-O(n)
// where n is number of ring

void hanoi(int n, char s, char d, char h){
     if(n==1){
          cout<<"move plate "<<n<<" from "<<s<<" to "<<d<<ln;
     
          return;
     }
     hanoi(n-1,'s','h','d');
     cout<<"move plate "<<n<<" from "<<s<<" to "<<d<<ln;
     hanoi(n-1,'h','d','s');
}

void solve(){
     int n;
     cin>>n;
     hanoi(n,'s','d','h');
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
 cin >> t;
 while(t--) {
      solve();
 }
cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms";
 return 0;
}
