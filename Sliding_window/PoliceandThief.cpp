/*
input:-
2
89 4
T P P P T T P T P T P P T T P T T P P P P P T T P T P T T T P P P P T T P T P T P T T P T P T T P T T T T T T T P P T P T P T P P T T P P T T T T T T T T T T P T P P P P T P T T
8 1
P T T T P T T P 
output:-38
3
time comp:- o(N)
space comp:- O(N)

https://www.geeksforgeeks.org/policemen-catch-thieves/

*/

#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define int ll
typedef long double ld;
const ll INF = 1e18;
const ll M = 1e9 + 7;
const ll MOD = 998244353;
double eps = 1e-12;
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define ln "\n"
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin()                     \
     ios_base::sync_with_stdio(false); \
     cin.tie(NULL);                    \
     cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

void solve()
{
     int n, k;
     cin >> n >> k;
     vector<char> arr(n);
     forn(i, n) cin >> arr[i];
     int countP = count(arr.begin(), arr.end(), 'P');
     int countT = count(arr.begin(), arr.end(), 'T');
     if (countT == 0 || countP == 0)
     {
          cout << 0 << ln;
          return;
     }
     vector<int> vt;
     for (int i = 0; i < n; i++)
     {
          if (arr[i] == 'P')
          {
               vt.pb(i);
          }
     }
     int ans = 0, p = 0,i=0;

     while (p < sz(vt) && i < n)
     {
          if (arr[i] == 'T')
          {
               if (abs(i - vt[p]) <= k)
               {
                    ans++;
                    p++;
                    i++;
               }
               else if (vt[p] < i)
               {
                    p++;
               }
               else
               {
                    i++;
               }
          }
          else
          {
               i++;
          }
     }

     cout << ans << ln;
}

signed main()
{
     // FUCK the rating, Just learn & grow after every contest!!! BEST of luck maharishi...you can do it..believe that...
     fast_cin();
#ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
     freopen("error.txt", "w", stderr);
#endif

     ll t = 1;
     cin >> t;
     while (t--)
     {
          solve();
     }
     cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms";
     return 0;
}